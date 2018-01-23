/*
 * =====================================================================================
 *
 *       Filename:  chars.c
 *
 *    Description:  practice characters
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:51:24 AM
 *       Revision:  none
 *       Compiler:  gcc chars.c -o chars
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char input;
    printf("do you like to code?:\n");
    scanf("%c\n", &input);
    printf("1) you put [%c] aren't you special\n", input);
    printf("2) you put [%c] aren't you special\n", input);
    printf("do you like to code?:\n");
    scanf(" %c ", &input);
    printf("3) you put [%c] aren't you special\n", input);
   
    printf("do you like to code?:\n");
    scanf("%c", &input);
    return 0;
}
// Function Definitions


