/**
 * @file operadores.c
 * @author lufer (you@domain.com)
 * @brief Manipular Operadores
 * @version 0.1
 * @date 2020-10-30
 * 
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>

/**
 * @brief 
 * 
 * Analisar o resultado?
 * @return int 
 */
int main(){

    //declaração de variáveis
    int x;
    int y;

    //Inicializar variáveis
    x=7;
    y = x * 2;                                 //y=14

    //Calculo
    x=y++;                                  //x=14; y=15
    printf("1) X= %d, Y=%d \n", x, y);  

    x=++y;                                  //x=16; y=16
    printf("2) X= %d, Y=%d \n", x,y); 
    //mostrar?

    x+=1;      //x+=1 == x = x+1            //x==17
    x-=y;      //x-=y == x = x-y            //x = x -y -> x=1  y=16

    //apresentam resultados
    printf("3) %d\n", x>y);                    //? Façso ou Zero (0)?
    printf("4) X= %d, X=%d \n", x++, --x);    //?

    y*=2;
    x/=3;
    //mostrar?

}
