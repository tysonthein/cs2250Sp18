/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 10:06:17 AM
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
    int num;
    printf("Enter positive number >= 0: \n");
    scanf("%d", &num);

    while(num < 0)
    {
        printf("Try again! Enter positive number >= 0: \n");
        scanf("%d", &num);
    }
    printf("Done!\n");

    return 0;
}
// Function Definitions


