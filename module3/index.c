/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  Use index notation
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:43:25 AM
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

    char firstName[21];              //1) define 2 strings
    char lastName[21];               //2) get first name
    char midName[21];    
    printf("please enter your first name: \n");//3) get last name
    scanf("%s", firstName);                                             //4) display initials
    printf("please enter your middle name: \n");//3) get last name
    scanf("%s", midName);
    printf("please enter your last name: \n");//3) get last name
    scanf("%s", lastName);
    printf("Hello %s %s, \n", firstName, lastName);//3) get last name
    printf("your initials are [%c.%c.%c].\n", firstName[0], midName[0], lastName[0]);
    
    return 0;
}
// Function Definitions


