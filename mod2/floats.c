/*
 * =====================================================================================
 *
 *       Filename:  floats.c
 *
 *    Description:  doing stuff with floats
 *
 *        Version:  1.0
 *        Created:  01/18/2018 08:55:23 AM
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
const double gravity = 9.8;

const double poundToKilo = 0.453592;
// Main Function
int main()
{

    double weightLbs = 2.4;
    double weightKilo;

    printf("My w is: %lf\n", weightLbs);
    printf("please enter your weight in lbs:\n");
    scanf("%lf", &weightLbs);
    printf("you have entered: %lf lbs\n", weightLbs);
    printf("your mass in kg is %lf\n", weightLbs * poundToKilo);
    weightKilo = weightLbs * poundToKilo;
    printf("your weight back to pounds is %lf\n", weightKilo * gravity);
    return 0;

}
// Function Definitions


