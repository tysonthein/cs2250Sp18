/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  more practice with arguments
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:30:06 AM
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
    int pos = 0;

    printf("what is your position\n");
    scanf("%d", &pos);

    if(pos <= 3 && pos >= 1)
    {
     if(pos == 1){
        printf("Gold Medal\n");
     }
     if(pos == 2)
    {
     printf("Silver Medal\n");
    }

    if(pos == 3)
    {
     printf("Bronze Medal\n");
    }
    }
    //silver = 2
    else{
     printf("No Medal sorry try again!\n");
    }
    
    //silver = 2
    //silver = 2
    //bronze = 3
    //no medal sorry >3

    return 0;
}
// Function Definitions


