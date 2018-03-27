/*
 * =====================================================================================
 *
 *       Filename:  tysonThein_exam1_task1.c
 *
 *    Description:  task1
 *
 *        Version:  1.0
 *        Created:  03/01/2018 09:00:08 AM
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
//1) input how much money you want to earn
//2) define function that takes 1 input parameter that is the amount entered before
// Function Prototypes

// Main Function
int main()
{
    float annualIncome;

    printf("How much money do you want to earn this year?\n");
    scanf("%f", &annualIncome);

    if(annualIncome <= 5000.00){
        printf("With this amount of money %5.2f you can buy a TV\n", annualIncome);

    }
    else if((annualIncome <= 10000) && (annualIncome > 5000)){

        printf("With this amount of money %5.2f you can buy a RTV\n", annualIncome);

    }

    else if(((annualIncome > 10000) && ( annualIncome <= 50000))){

        printf("With this amount of money %5.2f you can buy a Car\n", annualIncome);

    }

    else if(annualIncome > 50000){

        printf("With this amount of money %5.2f you can buy an small house\n", annualIncome);

    }
    return 0;
}
// Function Definitions


