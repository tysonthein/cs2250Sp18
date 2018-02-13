/*
 * =====================================================================================
 *
 *       Filename:  arrays.c
 *
 *    Description:  practice with arrays
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:44:27 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// Constants
const int LEN = 10;
// Function Prototypes

// Main Function
int main()
{
    int ar[LEN];
    ar[0] = 4;
    ar[1] = 5;
    ar[2] = 6;
    ar[3] = 7;
    
    srand((int)time(0));
    
    for(int j = 0; j < LEN; j++){
        ar[j] = (rand() % 100);

    }
    
    for(int i = 0; i < LEN; i++){
        printf("the %d value is %d\n",i+1, ar[i]);
    }
   
   
    
    return 0;
}
// Function Definitions


