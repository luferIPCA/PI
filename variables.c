/**
 * @file variables.c
 * @author lufer (lufer@ipca.pt)
 * @brief Manipulação de variaveis
 * @version 0.1
 * @date 2020-10-29
 * @see https://www.tutorialspoint.com/cprogramming/c_variables.htm
 * @copyright Copyright (c) 2020
 * 
 */

#include <stdio.h>

// Variable declaration:
extern int a, b;
extern int c;
extern float f;

int main () {

   /* variable definition: */
   int a, b;
   int c;
   float f;
 
   /* actual initialization */
   a = 10;
   b = 20;
  
   c = a + b;
   printf("value of c : %d \n", c);

   f = 70.0/3.0;
   printf("value of f : %f \n", f);
 
   return 0;
}