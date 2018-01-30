/*
 * =====================================================================================
 *
 *       Filename:  switch.c
 *
 *    Description:  test switch statements
 *    note: only works on integers and single chars!
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
    switch(pos)
    {
        case 1:  //if (pos == 1)
      
            printf("Gold Medal\n");
            break;                      //leaves the block
        case 2:  //if(pos == 2)
            printf("Silver Medal\n");
        
            break;                      //leaves
        case 3:  //if(pos == 3)

            printf("Bronze Medal\n");
            break;
        case 14:

            r
            printf("plastic Medal\n");
            break;
        default: //else
   
            printf("No Medal sorry try again!\n");
    }
    //switchlogic
    //gold == 1
    //silver = 2
    //bronze = 3
    //no medal sorry >3

    return 0;
}
// Function Definitions


