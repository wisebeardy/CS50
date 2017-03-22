/*

    initials.c
    
    Author: Colin Arndt, beardy@colinarndt.io
    
    This file is a solution to the initials problem of 
    pset2 of CS50. Given a user's full name, it outputs
    their initials.

*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // get user's name
    string name = get_string();

    //print first initial if there are no leading spaces
    if (name[0] != ' ')
    {
        printf("%c", toupper(name[0]));
    }

    // print first initial if there are leading spaces, and remaining initials
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (name[i+1] != ' ' && name[i] == ' ')
        {
            printf("%c", toupper(name[i+1]));
        }
    }    
    printf("\n");
}
