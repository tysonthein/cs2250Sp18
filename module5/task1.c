/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  multiplication tables 1-10
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:38:12 AM
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
int rowMax = 10;
int collumnMax = 10;
int row = 1;
int collumn = 1;
printf("Multiplication table\n");
printf("[    , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 ]\n");
while(row <= rowMax){
    collumn = 1;
    printf("[%d's]", row);
    while(collumn <= collumnMax){
        printf("[%3d]", row * collumn);
        collumn = collumn + 1;
    }
row = row + 1;
printf("\n");
}



    return 0;
}
// Function Definitions


