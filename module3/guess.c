/*
 * =====================================================================================
 *
 *       Filename:  guess.c
 *
 *    Description:  guess game
 *
 *        Version:  1.0
 *        Created:  01/25/2018 10:07:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
 srand((int)time(0));
int input;
int guess1;
int guess2;
int guess3;
 printf("guess a number between 0-9:\n");
 printf("guess a different number between 0-9:\n");
 printf("guess one more number between 0-9:\n");
 scanf("%d", &guess1);
 scanf("%d", &guess2);
 scanf("%d", &guess3);
 input = rand() % 10;
 printf("the numbers you guessed were [%d,%d,%d]. the actual number was [%d]\n", guess1, guess2, guess3, input);
    return 0;
}
// Function Definitions


