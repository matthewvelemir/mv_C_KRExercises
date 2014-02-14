/* 
 * File:  Chp1Ex1_15_2.c 
 * Author: matthewvelemir      
 * Description: Rewrite the temperature conversion program to use a function.
 * K&R Second Edition
 */

#include <stdlib.h>
#include <stdio.h>

float CelToFahr(float basetemp); 
float FahrToCel(float basetemp);

int ioexercise1_15_2(void)
{
    const float UPPER = 300.0;
    const float LOWER = 0.0; 
    const float STEP = 20.0; 
    
    float Fahr, Cels; 
    
    printf("Celcius\t Fahrenheit\n");
    for (Cels=LOWER; Cels <= UPPER; Cels = Cels + STEP)
    {
        printf("%4.0f \t %6.2f \n", Cels, CelToFahr(Cels)); 
    }// cels to fahr for 
    
    printf("\nFahrenheit\t Celcius\n");
    for (Fahr = LOWER; Fahr <= UPPER; Fahr = Fahr + STEP)
    {
      printf("%4.0f \t %6.2f \n", Fahr, FahrToCel(Fahr)); 
    } // farh to cels for 
    
    return 0;    
}//end main


// CelToFahr: Convert a temperature in celcius to fahrenheit.  Return float. 

float CelToFahr(float basetemp)
{
    float FahrVal;
    FahrVal = 0.0;
    
    FahrVal = (basetemp * 9.0/5.0) + 32.0;
    
    return FahrVal;
    
}// end celtofahr

// FahrToCel: Convert a temperature in fahrenheit to celcius.  Return float. 

float FahrToCel(float basetemp)
{
    float CelVal;
    CelVal = 0.0;
    
    CelVal = (basetemp - 32.0) * (5.0/9.0); 
    return CelVal;    
}// end fahrtocel