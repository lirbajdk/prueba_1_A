#include <Arduino.h>

//git config --global user.name pablo
//git config --global user.email pablo@mail.com

#include <Arduino.h>


#define bot1 ((PINB >> PB5) & 0x01)


int main()
{
    DDRC |= 0b111111;
    DDRB &= ~(1 << PB5);
    PORTB |= (1 << PB5);
    while (1)
    {
        if (bot1 == 1)
        {
            PORTC = 0b00101101;
        }
        else
        {
            PORTC = ~0b00101101;
        }
    }
}


/*void prender_leds(uint8_t cual);

uint8_t sumar(uint8_t valA, uint8_t valB);

int main(void)
{

    prender_leds(5);

    uint8_t resu = sumar(5,90);

    /*escribo algo*/
    /*escribo otra cosa
}

//------------------------------------------------------
//------------------------------------------------------
uint8_t sumar(uint8_t valA, uint8_t valB)
{
    return valA + valB;
}

//------------------------------------------------------
//------------------------------------------------------
void prender_leds(uint8_t cual)
{

    switch (cual)
    {
    }

    PORTD |= (1 << PD4);
    PORTD |= (1 << PD5);
    PORTD |= (1 << PD6);
    PORTD |= (1 << PD7);
}


//------------------------------------------------------
//------------------------------------------------------
void prender_leds_2(uint8_t cual)
{

    switch (cual)
    {
    }
    // hacer algo porque esta funcion no hace una mierda.


}*/


