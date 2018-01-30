/*
 * =====================================================================================
 *
 *       Filename:  if.c
 *
 *    Description:  practice with branch arguments
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:45:51 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    srand((int) num1);
    
    num1 = rand(num1 % 10) + 1;
    int guess;
    
    printf("guess a number between 1-10:\n");
    scanf("%d", &guess);
    
    printf("your guess was %d the number was actually %d", guess, num1);

return 0;
}
// Function Definitions


