/*
 * =====================================================================================
 *
 *       Filename:  compStrings.c
 *
 *    Description:  Compare String Values
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:05:14 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>  // to compare strings of chars
// Constants

// Function Prototypes

// Main Function
int main()
{
    char word[51];
    char word2[51];
    printf("Enter a word: \n");
    scanf("%s", word);
    
    printf("you entered: %s\n", word);
    
    if(strcmp(word, "Hello") == 0)
    {
        printf("You entered Hello\n");
    }
    else
    {
        printf("You did not enter Hello\n");
    }

    strcpy(word2, word);
    printf("%s = %s", word2, word);
    return 0;
}
// Function Definitions
// http://en.cppreference.com/w/cpp/string/byte/strncmp


