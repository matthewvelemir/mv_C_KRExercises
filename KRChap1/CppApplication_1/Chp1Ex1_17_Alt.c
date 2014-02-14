/* 
 * File:  Chp1Ex1_17.c 
 * Author: matthewvelemir      
 * Description: Write a program to print all input lines > 80 chars. 
 * 
 * The easiest solution is to set MAXLINE to an arbitrarily large value and use
 *  that value to size the array.  Of course this means the input is actually
 * limited to the buffer array size.  Yeah.  Not great.
 * K&R Second Edition
 */

#include <stdio.h>
#include <stdlib.h>


#define MINOUT 80
#define MAXLINE 10000

int getaline(char line[], int limit); // getline exists so rename from text
void copy(char to[], char from[]);

int ioexercise1_17_2(void)
{
    int len; /* current line length */
    char line[MAXLINE];
    
       while ((len = getaline(line, MAXLINE)) > 0)
    {
       
       if (len >= MINOUT) /* there was a line long enough to print */
        printf("\n%s\n", line);
    }
    
      return 0;
}// end main 


/* getaline: read a line into line, return length */
int getaline(char line[], int limit)
{
   int c, i;
    
    for (i=0; i < limit-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        line[i] = c;
   
    if (c == '\n') {
        line[i] = c;
        ++i;
    }// if 
    
    line[i] = '\0';
    return i;
}

