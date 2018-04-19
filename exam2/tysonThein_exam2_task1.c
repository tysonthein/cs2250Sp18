/*
 * =====================================================================================
 *
 *       Filename:  tysonThein_exam2_task1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/19/2018 08:33:36 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h> //for C
#include <stdlib.h>
// for C++
// for C++

// Constants

// Function Prototypes
void sort3 (int *a, int *b, int *c);
// Main Function
int main()
{
     int i1 = 44, i2 = 9, i3 = 130;
     
     printf("Original order i1[%d], i2[%d], i3[%d]\n", i1, i2, i3);
     sort3(&i1, &i2, &i3);
     printf("Descending order i1[%d], i2[%d], i3[%d]\n", i1, i2, i3);
     
     i1 = 10;
     i2 = 33;
     i3 = 55;

     printf("Original order i1[%d], i2[%d], i3[%d]\n", i1, i2, i3);
     sort3(&i1, &i2, &i3);
     printf("Decending order i1[%d], i2[%d], i3[%d]\n", i1, i2, i3);
               return 0;
}
// Function Definitions
void sort3 (int *a, int *b, int *c)
{
    int temp1 = *a;
    int temp2 = *b;
    int temp3 = *c;

    if(temp1 > temp2){
        if(temp1 > temp3){

            *a = temp1;

            if(temp2 > temp3){

                *b = temp2;
                *c = temp3;

            }

            else{

                *b = temp3;
                *c = temp2;

            }
        }

        else{

            *a = temp3;
            *b = temp1;
            *c = temp2;

        }
    }
    
    else if(temp1 > temp3){
        if(temp1 < temp2){

            *a = temp2;
            *b = temp1;
            *c = temp3;

        }

    }

    else{

        *c = temp1;

        if(temp2 > temp3){

            *a = temp2;
            *b = temp3;

        }

        else{

            *a = temp3;
            *b = temp2;

        }
    }

}

