/*
 * =====================================================================================
 *
 *       Filename:  funcStr.c
 *
 *    Description:  practice with string functions
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:04:48 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

// Constants
const int INPUT_STR_SIZE = 50; // input string size
// Function Prototypes
void StrSpaceToHyphen(char modString[]);
// Main Function
int main()
{
    char userStr[INPUT_STR_SIZE];

    printf("Enter string with spaces: \n");
    fgets(userStr, INPUT_STR_SIZE, stdin);

    StrSpaceToHyphen(userStr);

    printf("String with hyphens: %s\n", userStr);

    return 0;
}
// Function Definitions
void StrSpaceToHyphen(char modString[])
{
    int i = 0; //loop index
    for(i = 0; i < strlen(modString); ++i)
    {
        if(modString[i] == ' ')
        {
            modString[i] = '-';
        }

    }
return;
}

