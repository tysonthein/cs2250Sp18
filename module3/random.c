/*
 * =====================================================================================
 *
 *       Filename:  random.c
 *
 *    Description:  random number fun
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:51:54 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> // for rand() function
#include <time.h> //for srand() function: set your random seed
// Constants

// Function Prototypes

// Main Function
int main()
{
    srand((int)time(0));
    printf("A random num [%d] suddenly appears!\n", rand() % 1000);
                                    //fun with random numbers
    printf("A random num [%d] suddenly appears!\n", rand() % 1234234);
    printf("A random num [%d] suddenly appears!\n", rand() % 98765);
    printf("A random num [%d] suddenly appears!\n", rand() % 5);
    //lets use time now to change the numbers
    
    printf("A random num [%d] suddenly appears!\n", rand() % 100);
    printf("A random num [%d] suddenly appears!\n", rand() % 100);
    printf("A random num [%d] suddenly appears!\n", rand() % 100);
    return 0;
}
// Function Definitions


