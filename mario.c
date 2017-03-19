
/*

    mario.c
    
    Author: Colin Arndt, beardy@colinarndt.io
    
    This file is a solution to the mario pyramid problem from
    pset1 of CS50. It draws a half-pyramid similar to the one
    at the end of World 1-1, of a user-specified height.

    Sample:
    
Enter pyramid height: 4
   ##  
  ###  
 #### 
#####

*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Enter pyramid height: ");
    int n;
    
    //Get user input, validate and re-prompt if out of bounds
    do 
    {
     n = get_int();
    }
    while(n < 1 || n > 23);


    //Outer loop draws each line, while the two inner loops draw the spaces and hashes on each line
    
    for (int i = 0; i < n; i++)
    {
       for (int j = 0 ; j < n-1-i; j++)
       {
           printf(" ");
       }   
       for (int k = 0; k < 2+i; k++)
       {
           printf("#");
       } 
       printf("\n");
    }   
}    
