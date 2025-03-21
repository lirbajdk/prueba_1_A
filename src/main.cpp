#include <Arduino.h>
//-------------Ejercicio 2-------------//
//git config --global user.name pablo
//git config --global user.email pablo@mail.com

//#define bot1 ((PINB >> PB5) & 0x01)


void setup_timer0()
{
    TCCR0A = 0b00000010; // Modo CTC
    TIMSK0 = 0b00000010; // Habilitar interrupción de comparación A
    OCR0A = 249;         // Valor de comparación
    TCCR0B = 0b00000011; // Prescaler 64
}


int main()
{    
    DDRC |= 0b1111;


    int8_t cntb = 0;
    int8_t arribajo = 0; //arriba = 1, abajo = 0;
    while (1)
    {
        asm("NOP");
        if (cntb != 1111)
        {
            cntb++;
            if(cntb == 1111)
                arribajo = 0;


        }else if (arribajo == 0){
            cntb --;
        }


        //_delay_ms(20);
    }
}


