/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  mult tables
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:52:10 AM
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
const int MAX = 10;
const int MIN = 1;
// Function Prototypes

// Main Function
int main()
{
    int row = 1;
    int collumn;
    int num;
    
    for(collumn = 1; collumn < 11; collumn++){
        
        num = row * collumn;
        printf("%d", num);
        if(collumn == 10){
        row++;
        break;
        }
    }

    return 0;
}
// Function Definitions


