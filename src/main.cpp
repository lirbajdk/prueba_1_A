#include <Arduino.h>

//git config --global user.name pablo
//git config --global user.email pablo@mail.com

void prender_leds(uint8_t cual);

uint8_t sumar(uint8_t valA, uint8_t valB);

int main(void)
{

    prender_leds(5);

    uint8_t resu = sumar(5,90);

    /*escribo algo*/

    /*escribo otra cosa*/
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


}


