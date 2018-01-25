/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description:  see how big of variables i can store
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:00:12 AM
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
// Constants

// Function Prototypes

// Main Function
int main()
{
    int num = 1; //max = 32768;
    unsigned int unum = 1; 
    num *= 10000;
    unum *= 10000;
    printf("the sizeof int is %ld\n", sizeof(num));
    printf("the sizeof unum int is %ld\n", sizeof(unum));
    printf("num = [%d], unum = [%u]\n", num, unum);
    num *= 10000;
    unum *= 10000;

    printf("num = [%d], unum = [%u]\n", num, unum);    
    num *= 10000;
    unum *= 10000;
    unum *= 30;
    
    printf("num = [%d], unum = [%u]\n", num, unum);

    unum *= (31/30);
    printf("num = [%d], unum = [%u]\n", num, unum);

    //printf("num = [%d]\n", numSize);

    return 0;
}
// Function Definitions


