/*
 * =====================================================================================
 *
 *       Filename:  coolmath.c
 *
 *    Description:  asdf
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:41:05 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h> // need -lm after gcc executable to work
#include <math.h> 
// Constants
// sqrt(); pow();,fabs();
// Function Prototypes

// Main Function
int main()
{

    double sideA = 4.0;
    double sideB = 5.0;
    double sideC;

    sideC = sqrt(pow(sideA,sqrt(4))+pow(sideB, sqrt(4)));
    printf("sideA: %lf\n sideB: %lf\n sideC: %lf\n",sideA , sideB, sideC);
    printf("the abs of %lf is %lf\n", a, fabs(a));
    return 0;
}
// Function Definitions


