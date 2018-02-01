/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  string practice
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:09:07 AM
 *       Revision:  none
 *       Compiler:  gcc
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
    char name[11];
    char n;
    printf("enter your name:\n");
    scanf("%s", name);
    printf("your name is: [%s]\n", name);
    printf("enter your favorite letter\n");
    scanf("%c",&n);
    printf("you chose [%c]\n", n);
    return 0;
}
// Function Definitions


