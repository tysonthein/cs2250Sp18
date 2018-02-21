/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/20/2018 08:35:13 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>// Constants

const int MAXUSER = 5;
// Function Prototypes

// Main Function
int main()
{
double weight[MAXUSER];
double totWeight = 0;
double avgWeight = 0;
double maxWeight = 0;
int i;

for(i = 1; i <= MAXUSER; i++){
    printf("Enter weight %d:", i);
    scanf("%lf", &weight[i-1]);
}
    
    printf("You entered: %lf %lf %lf %lf %lf\n", weight[0], weight[1], weight[2], weight[3], weight[4]);
    totWeight = weight[0] + weight[1] + weight[2] + weight[3] + weight[4];
    avgWeight = (weight[0] + weight[1] + weight[2] + weight[3] + weight[4])/5;
    maxWeight = weight[0];

    for(i = 0; i < MAXUSER; i++){
        if(weight[i] > maxWeight){
            maxWeight = weight[i];
        }
    }
    
    printf("Total weight: %lf\n", totWeight);
    printf("Average weight: %lf\n", avgWeight);
    printf("Max weight: %lf\n", maxWeight);



    return 0;
}
// Function Definitions


