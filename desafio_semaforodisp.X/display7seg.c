/*
 * File:   display7seg.c
 * Author: 20185192
 *
 * Created on 10 de Março de 2021, 16:54
 */


#include <xc.h>

char digitos [16] = { 0X3F, 0X06, 0X5B, 0X4F,
                      0X66, 0X6D, 0X7D, 0X07,
                      0X7F, 0X6F, 0X77, 0X7C,
                      0X39, 0X5E, 0X79, 0X71 };

void display7seg_init( void )
{
    ANSELH = 0;
    TRISB = 0X00;
    PORTB = 0X00;
}

void display7seg ( char num )
{
    if( num >= 0 && num <=15)
        PORTB = digitos[num];
    
    else
        PORTB = 0X00;
}
    

