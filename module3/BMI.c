/*
 * =====================================================================================
 *
 *       Filename:  BMI.c
 *
 *    Description:  Calculate the body mass index
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:28:14 AM
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
    double weightInKg;
    double heightInM;
    double bodyMassIndex;

    printf("please enter your weight in Kg: \n");
    scanf("%lf", &weightInKg);// 1) capture the weight in Kg

    // 2) capture the height in meters
    printf("please enter your height in M: \n");
    scanf("%lf", &heightInM);// 1) capture the weight in Kg
    
    // 3) calculate your BMI = weight/height^2
    printf("your Body mass index is equal to %lf / (%lf * %lf)\n", weightInKg, heightInM, heightInM);
    
    // 4) display BMI
    bodyMassIndex = weightInKg / (heightInM * heightInM);
    printf("your BMI is: %lf \n", bodyMassIndex);

    return 0;
}
// Function Definitions


