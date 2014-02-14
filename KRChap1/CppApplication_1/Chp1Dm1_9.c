/* 
 * File:  Chp1Dm1_9.c 
 * Author: matthewvelemir      
 * Description: Demo of character array.  Program to read lines and print the 
 * longest.
 * K&R Second Edition
 */

#include <stdio.h>
#include <stdlib.h>

#define MAXLINE 5 /* maximum input line length */

int getaline(char line[], int limit); // getline exists so rename from text
void copy(char to[], char from[]);

int Chp1Demo1_9(void)
{
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;

    while ((len = getaline(line, MAXLINE)) > 0)
    {
        if (len > max) 
        {
            max = len;
            copy(longest, line);
        } //if 
    } // while 

    if (max > 0) /* there was a line */
        printf("%s", longest);
    
    return 0;
}// end main 

/* getaline: read a line into line, return length */
int getaline(char line[],int limit)
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
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
