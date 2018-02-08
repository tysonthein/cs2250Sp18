/*
 * =====================================================================================
 *
 *       Filename:  task4.c
 *
 *    Description:  even numbers
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:15:42 AM
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
    int a = 1;
    int b = 1;
    int count;
    while(1){
        if((a*b) % 2 == 0){
            printf("count = %d\n", b);
            printf("%d\n", a*b);
            b = b + 1;
            count++;
        }
        else{
        a = a + 1;
        }
        if(count==20){
            break;
        }
    }

    return 0;
}
// Function Definitions


