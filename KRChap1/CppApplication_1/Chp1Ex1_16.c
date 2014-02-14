/* 
 * File:  Chp1Ex1_16.c 
 * Author: matthewvelemir      
 * Description: Revise the main routine of the longest line program so it will 
 * correctly print the length of arbitrarily long input lines and as much of the 
 * text as possible. 
 * getchar() reads from a character input buffer - so when the function 
 * that calls it ends the data is not lost, it is still in the input buffer until 
 * getchar() finishes emptying it out.  The length can be determined from main, 
 * but getaline() alters the storage array and clears the buffer, so that character
 * is lost.
 * '\n' counts as a character when calculating length.  
 * I could have written it to continue to pickup MAXLINE-1 of the input each 
 * time the getaline() function runs  and display it, but I don't see the point of
 *  always losing a character, so all that is displayed is the first MAXLINE-1
 * characters of any line.  
 * It would make much more sense to edit getaline(), but that's 
 * not what was asked.  This is the least satisfying so far.
 * K&R Second Edition
 */

#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 5 /* maximum input line length */

int getaline2(char line[], int limit); // getline exists so rename from text
void copy2(char to[], char from[]);

int ioexercise1_16(void)
{
   
    int len; /* current line length */
    int max, currlength, cont; 
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    
    max = currlength= cont =0;

    while ((len = getaline2(line, MAXLINE)) > 0)
    {
        if (line[len-1] != '\n')
        {
           currlength = currlength + len; 
           if (cont == 0)
               copy2(longest,line);
           cont = 1;
         } //if
        else 
        {
           if (cont == 0)
           {
                copy2(longest, line);
                
            }
            
            currlength = currlength + len;
                        
            printf("Chars: %d:  %s \n", currlength, longest);
            currlength = 0;
            cont = 0;
        } //else
        
        
        
        
    } // while 

    
    return 0;
}// end main 

/* getaline: read a line into line, return length */
int getaline2(char line[],int limit)
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

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy2(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
    
