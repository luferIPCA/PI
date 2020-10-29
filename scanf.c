/**
 * @file scanf.c
 * @author lufer (lufer@ipca.pt)
 * @brief 
 * @version 0.1
 * @date 2020-10-29
 * @see http://www.cplusplus.com/reference/cstdio/scanf/
 * @copyright Copyright (c) 2020
 * 
 */
#include <stdio.h>

int main ()
{
  char str [80];
  int i;

  printf ("Enter your family name: ");
  scanf ("%79s",str);  
  printf ("Enter your age: ");
  scanf ("%d",&i);
  printf ("Mr. %s , %d years old.\n",str,i);
  printf ("Enter a hexadecimal number: ");
  scanf ("%x",&i);
  printf ("You have entered %#x (%d).\n",i,i);
  
  return 0;
}