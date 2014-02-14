/* 
 * File:  Chp1Dm1_7.c 
 * Author: matthewvelemir      
 * Description: Demo of functions.  Exponential function.
 * K&R Second Edition
 */

#include <stdlib.h>
#include <stdio.h>

int power(int base, int n);

int Chp1Demo1_7(void)
{
  int i; 
  
  for (i=0; i < 10; ++i)
      printf("%d\t %d\t %d\n", i, power(2,i), power(-3,i));

  return 0;    
}// end main

// Power: Raises base to the nth power; n >=0 

int power(int base, int n)
{
    int i, p;
    
    p=1;
    for( i = 1; i <=n; ++i)
        p = p * base; 
    
    return p;
    
}// end power 