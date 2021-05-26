

#include <xc.h>
#define MASK  0x10

void teclado_init ( void ) 
{
    ANSELH = 0;
    TRISB = 0XF0;
    PORTB = 0;        
}



char tabteclado[4][4] =   { {'1','2','3','A'},
                            {'4','5','6','B'},
                            {'7','8','9','C'},
                            {'*','0','#','D'}  };
                                  

char teclado ( void )

{
    char tecla = 0;
    char c, l;
   
    for ( l=0; l<4; l++)
    {
         PORTB = 0x01<<l;
         for( c=0; c<4; c++ )
         {
             if ( PORTB & MASK<<c )
                 tecla = tabteclado[l][c];
         }
    }
    return ( tecla );
}