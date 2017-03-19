
/*

    mario.c
    
    Author: Colin Arndt, beardy@colinarndt.io
    
    This file is a solution to the mario pyramid problem from
    pset1 of CS50, more comfortable version. It draws a pyramid 
    with spaces in the middle, of a user-specified height.
    
Sample:
    
Enter pyramid height: 4
   #  #   
  ##  ##  
 ###  ### 
####  ####

*/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Get user input, validate and re-prompt if out of bounds
    int n;
    do 
    {
    printf("Enter pyramid height: ");
    n = get_int();
    }
    while(n < 1 || n > 23);


    //Outer loop draws each line, while the inner loops draw the spaces and hashes on each line
    
    for (int i = 0; i < n; i++)
    {
       for (int j = 0 ; j < n-1-i; j++)
       {
           printf(" ");
       }   
       for (int k = 0; k < 1+i; k++)
       {
           printf("#");
       } 
       printf("  ");
       for (int k = 0; k < 1+i; k++)
       {
           printf("#");
       }
       for (int j = 0 ; j < n-1-i; j++)
       {
           printf(" ");
       }
       printf("\n");
    }   
}    
