/*
 * =====================================================================================
 *
 *       Filename:  sentences.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2018 08:45:48 AM
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
const int STRSIZE = 50;
// Function Prototypes

// Main Function
int main()
{
    char fullName[STRSIZE];
    printf("Please enter your full name: ");
    fgets(fullName, STRSIZE, stdin);
   // printf("Hi [%s]\n2", fullName);

    for (int i = 0; i < strlen(fullName); i++){
        printf("%c", fullName[i]);
    }

    return 0;
}
// Function Definitions


