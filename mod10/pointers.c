/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:43:48 AM
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

// Constants

// Function Prototypes

// Main Function
int main()
{
    int i = 7;
    int* pi = NULL;
    
    pi = &i;

    printf("i[%d] value that points to pi[%d]\n", i, *pi);
    printf("Enter Number of elements: \n");
    scanf("%i", &i);
    //use malloc: takes one argument number of bytes
    //when you are done you need to free(memory or address, pointer);
    //type* = malloc(sizeof(type))
    pi = (int*)malloc(i * sizeof(int))
    int ar[i];
    for(int j = 0; j < i; j++)
        {
            printf("ar[%d] = %d\n", j, ar[j]);
        }
    free(pi);


    return 0;
}
// Function Definitions


