/*
 * =====================================================================================
 *
 *       Filename:  floatDiv.c
 *
 *    Description:  learn about float division
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:24:12 AM
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

    int age = 25;
    int grade = 303;
    double result;
    int iresult;
    result = (double)grade/(double)age;
    printf("result = %lf\n", result);

    iresult = (double)grade/(double)age;
    
    printf("result = %d\n", iresult);

    result = (double)grade/(double)age;
    printf("result = %d\n", (int)result);
    return 0;
}
// Function Definitions


