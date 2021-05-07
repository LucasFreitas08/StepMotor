/*
 * File:   main.c
 * Author: 20185192
 *
 * Created on 7 de Maio de 2021, 14:02
 */
#include "config.h"
#include <xc.h>
#include "LCD4bits.h"
#include "delay.h"

void main(void)
{
    dispLCD_init();
    dispLCD(0,0, "SENAI KEYBOARD");
    while ( 1 )
    {
        
    }
    return;
}
