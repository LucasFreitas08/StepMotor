/*
 * File:   main.c
 * Author: 20185092
 *
 * Created on 17 de Fevereiro de 2021, 14:56
 */


#include <xc.h>
#include "config.h"
#include "semaforo.h"
#include "disp7seg.h"
#include "delay.h"

void main(void) 
{
    char estado = 0;
    int cont;
    
    while(1)
    {
        switch ( estado )
        {
            case 0:
                estado = 1;
                break;
                
            case 1:
                display7seg_init();
                semaforo_init();
                estado = 2;
                break;
                
            case 2:
                amarelo (0);
                vermelho (0);
                verde (1);
                vermelhoped (1);
                verdeped (0);
                if( botao ()== 1 )
                    estado = 3;
                break;
                
            case 3:
                cont = 6;
                while ( cont >= 0 )
                {
                    display7seg(cont);
                    delay(1000);
                    cont--;
                }
                estado = 4;
                break;
                
            case 4:
                cont = 0;
                display7seg (0);
                estado = 5;
                break;
                
            case 5:
                amarelo (1);
                vermelho (0);
                verde (0);
                vermelhoped (1);
                verdeped (0);
                cont = 3;
                while ( cont >= 0 )
                {
                    display7seg(cont);
                    delay(1000);
                    cont--;
                }
                estado = 6;
                break;
                
            case 6:
                cont = 0;
                display7seg (0);
                estado = 7;
                break;
                
            case 7:
                vermelho (1);
                amarelo (0);
                verde (0);
                verdeped(1);
                vermelhoped (0);
                cont = 6;
                while ( cont >= 0 )
                {
                    display7seg(cont);
                    delay(1000);
                    cont--;
                }
                estado = 8;
                break;
                
            case 8:
                cont = 0;
                display7seg (0);
                estado = 1;
                break;
        }
    }
}
    
