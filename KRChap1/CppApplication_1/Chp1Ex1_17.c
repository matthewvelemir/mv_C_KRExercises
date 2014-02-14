/* 
 * File:  Chp1Ex1_17.c 
 * Author: matthewvelemir      
 * Description: Write a program to print all input lines > 80 chars. 
 * So this is the better version of the program, wherein you can take in 
 * lines of any size using a known array size. 
 s* K&R Second Edition
 */

#include <stdio.h>
#include <stdlib.h>

#define MINLINE 80                      // minimum accepted input for echo

int getinput(char line[], int length);
void cleararray(char line[], int length);
void printarray(char line[], int length);

int ioexercise1_17(void) 
{
        
    int i, len;
    char line[MINLINE+1];               //last index used as a 'more input coming' flag 
    
    cleararray(line,MINLINE);           // initialize the array
    line[MINLINE] = 0;                  // initialize the more input flag

    while ((len = getinput(line, MINLINE)) > 0)
    {
        if (len == MINLINE)             // if the length is the required line length, then print it
        {
            printarray(line, MINLINE);
            cleararray(line, MINLINE);
        }// if
        else if (line[MINLINE] == 1)    // if the length is too short but it is 
        {                               // a continuation, print it
            printarray(line, MINLINE);
            cleararray(line, MINLINE);
            line[MINLINE] = 0;
        }// else if
    } // input while  
    return (EXIT_SUCCESS);
} // end main

// getinput():  capture user input and store in teh provided array, so long as
// the input is less than the size of the array.  If the size of input is greater 
// than size of the array, set the flag at the last array index location to 1.

int getinput(char line[],int length )
{
    int i, inputc;
      
    for (i=0; i < length && (inputc = getchar()) != '\n' && inputc !=EOF; i++)
        line[i] = inputc;
    
    if (inputc == '\n')
    {
        line[i] = inputc;
        i++;
    }  // if
    else 
    {
        line[MINLINE] = 1;
    } // else
    return i;
    
} // end getinput()


// cleararray():  clears the array so that new input can be entered 

void cleararray(char line[], int length)
{
    int i; 
    for(i=0; i < length; i++)
        line[i] = 0;
    
} // end cleararray()

// printarray():  do not wish to print the last character in the array as it
// is being used as a flag.  So here's an output loop.

void printarray(char line[], int length)
{
    int i;
    for (i=0; i < length; i++)
       putchar(line[i]);
      
    
}// end printarray()
