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
double avgWeight = 0;
double maxWeight = 0;
int i;
int j;
double Sum = 0;
maxWeight = weight[0];
for(i = 1; i <= MAXUSER; i++){
    printf("Enter weight %d:", i);
    scanf("%lf", &weight[i-1]);
    Sum += weight[i-1];
    j = i;
    for(j = i; j <= MAXUSER; j++){
    if(weight[j] > maxWeight){
            maxWeight = weight[i];
        }
    }

}
printf("You entered: %lf %lf %lf %lf %lf\n", weight[0], weight[1], weight[2], weight[3], weight[4]);

    avgWeight = Sum / 5;

    printf("Total weight: %lf\n", Sum);
    printf("Average weight: %lf\n", avgWeight);
    printf("Max weight: %lf\n", maxWeight);



    return 0;
}
// Function Definitions


