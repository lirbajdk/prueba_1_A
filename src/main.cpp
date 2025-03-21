#include <Arduino.h>
//-------------Ejercicio 2-------------//
// git config --global user.name pablo
// git config --global user.email pablo@mail.com

/*
- cuente (ascendente) en binario de 4 bits y presente el valor en un puerto a elección.
- la cuenta debe realizarse en forma autónoma cada 1 segundo.
- al llegar al valor máximo la cuenta debe invertir el sentido (descendente).
- al llegar al valor mínimo repite el punto 1 en bucle infinito
- Re-implementar el contador SIN el uso de retardos bloqueantes, utilizando TIMER0 (no es necesario incluir delay.h)
*/
// #define bot1 ((PINB >> PB5) & 0x01)

static int8_t secon = 1;

void setup_timer0();

int main()
{
    // config_io();
    setup_timer0();
    sei();

    DDRC |= 0b00001111;
    int8_t cntb = 0b0000;
    int8_t arribajo = 1; // arriba = 1, abajo = 0;
    while (1)
    {
        asm("NOP"); // (le estoy diciendo a la maquina que no haga nada durante 1/4 de milisegundo)
        if (secon)
        {
            secon=0;
            switch (arribajo)
            {
            case 1:
                cntb++; // cntb ++ 0b0001; // (esto es lo que hice estando re quemado)
                if (cntb == 0b1111)
                    arribajo = 0;
                break;
            case 0:
                cntb--;
                if (cntb == 0b0000)
                    arribajo = 1;
                break;
            }
            PORTC = cntb;
        }

    }
}

void setup_timer0()
{
    TCCR0A = 0b00000010; // Modo CTC
    TIMSK0 = 0b00000010; // Habilitar interrupción de comparación A
    OCR0A = 249;         // Valor de comparación
    TCCR0B = 0b00000011; // Prescaler 64
}

ISR(TIMER0_COMPA_vect)
{
    static int16_t time = 0;
    // secon = 1;
    if (time++ == 1000)
    {
        time = 0;
        secon = 1;
    }
}