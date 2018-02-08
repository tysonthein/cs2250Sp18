/*
 * =====================================================================================
 *
 *       Filename:  forloop.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:39:37 AM
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
    int rounds = 3;

    while(rounds != 0){
        printf("Hello there while\n");
        rounds -= 1;
    }

    for(int r=0; r < rounds; r++){
        printf("Hello there for\n");
    }


    return 0;
}
// Function Definitions


