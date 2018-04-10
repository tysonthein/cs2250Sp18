/*
 * =====================================================================================
 *
 *       Filename:  infile.c
 *
 *    Description:  reading text files
 *
*        Version:  1.0
 *        Created:  04/03/2018 09:17:24 AM
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
#define NUM 5     // no semi-colon
// equal to Const int NUM = 4;

// Function Prototypes

// Main Function
int main()
{
    //int data[NUM];    //static memory
    int arrSize = 0;
    int* userNums;      //user numbers, dynamic memory;
    FILE* inFile = NULL;
    printf("Opening file data.txt\n");
    //Open file for Reading purposes
    inFile = fopen("data.txt", "r");
    if(inFile == NULL)
    {
        printf("could not open file\n");
        return -1;
    }
    else
    {
        printf("BOOM!\n");
    }
    // scan file
    fscanf(inFile, "%d", &arrSize);
    printf("arrSize %d\n", arrSize);
    userNums= (int*)malloc(sizeof(int)*arrSize);
    if(userNums == NULL)
    {
        printf("unable to malloc memory\n");
        fclose(inFile);
        return -2;
    }
    int i = 1; //skip the header record which has the value of number of records
    while(i <= arrSize)
    {
        fscanf(inFile, "%d", &(userNums[i]));
        printf("[%d] = %d\n", i, userNums[i]);
        i++;
    }

    fclose(inFile);
    free(userNums);
    return 0;
}
// Function Definitions


