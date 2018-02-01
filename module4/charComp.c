/*
 * =====================================================================================
 *
 *       Filename:  charComp.c
 *
 *    Description:  compar chars
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:44:13 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    char num;
    printf("Enter a number 0-9");
    scanf("%c", &num);

    if(num == '0')
    {
        printf("You entered 0\n");
    }
    else
    {
        printf("You entered a non-zero [%c]", num);
    }

    if(isalpha(num))
    {
        printf("is alpha");
    }
    else
    {
        printf("not alpha");
    }

    return 0;
}
// Function Definitions


