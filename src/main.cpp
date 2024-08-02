#include <Arduino.h>

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
