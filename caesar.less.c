/*

    caesar.less.c
    
    Author: Colin Arndt, beardy@colinarndt.io
    
    This file is a solution to the caesar problem of 
    pset2 of CS50. Given an encryption key and plaintext
    phrase, it outputs an encrypted phrase which rotates 
    alphabetic characters between 1 - 26 values, while
    keeping non-alphabetic characters the same.

*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]) 
{
    // validate input
    if (argc == 0 || argv[1] == NULL)
    {
        printf("Don't forget to enter a key\n");
        return 1;
    }
    if (argc > 2)
    {
        printf("Enter only one key\n");
        return 1;
    }

    //convert key from a string to an int
    int k = atoi(argv[1]);
    
    //get the original plaintext message
    printf("plaintext: ");
    string p = get_string();
    
    //create the cypher
    printf("ciphertext: ");
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        //handle uppercase letters. Subtracting 65 converts the ASCII values down to just 1 - 26, mod 26 keeps the value between 1 - 26, and adding 65 re-converts to the appropriate ASCII character. 
        if (isalpha(p[i]) && p[i] >= 'A' && p[i] <= 'Z')
        {
            printf("%c", ((p[i] - 65 + k) % 26) + 65);
        }
        
        //handle lowercase letters. Subtracting 97 converts the ASCII values down to just 1 - 26, mod 26 keeps the value between 1 - 26, and adding 97 re-converts to the appropriate ASCII character. 
        else if (isalpha(p[i]) && p[i] >= 'a' && p[i] <= 'z')
        {
            printf("%c", ((p[i] - 97 + k) % 26) + 97);
        }    
        
        //handle non-alphabetic characters
        else
        {
            printf("%c", p[i]);
        }
    }    
    
    printf("\n");
    return 0;
    
}    
