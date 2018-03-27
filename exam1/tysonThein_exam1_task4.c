/*
 * =====================================================================================
 *
 *       Filename:  tysonThein_exam1_task4.c
 *
 *    Description:  ascending order
 *
 *        Version:  1.0
 *        Created:  03/01/2018 09:57:36 AM
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
void initArray(int myNums[]){
    printf("The array before sort: ");
    int i = 0;
    for(i = 0; i < 5; i++){
        myNums[i] = (rand() % 1000);
    printf(" %d ", myNums[i]);
}
    printf("\n");
}
//void SortArray(int myNums[]){
  //  printf("The array after sort: ");
    //int i = 0;
   // for(i=0, i < 5, i++){


  //}

//}
// Main Function
int main()
{
    int myNums[5];


    initArray(&myNums[5]);

    return 0;
}
// Function Definitions


