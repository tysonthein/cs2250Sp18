/*
 * =====================================================================================
 *
 *       Filename:  tysonThein_exam1_task2.c
 *
 *    Description:  average set of grades
 *
 *        Version:  1.0
 *        Created:  03/01/2018 09:23:36 AM
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
int i;
int j = 1;
double average= 0;
int fail = 0;
printf("How many grades will you be entering?");
scanf("%d", &i);
int grade[i];
for(j = 1; j <= i; j++){
    printf("Enter grade#%d:", j);
    scanf("%d", &grade[j]);
    average = average + grade[j];
    if(grade[j] < 65){
        fail = fail + 1;
    }
}
average = average / i;
printf("Grade average = %3.2f\n", average);

printf("Number of failures = %d", fail);
printf("\n");


    return 0;
}
// Function Definitions


