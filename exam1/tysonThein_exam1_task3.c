/*
 * =====================================================================================
 *
 *       Filename:  tysonThein_exam1_task3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/01/2018 09:37:15 AM
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
double divide(int a, int b){
    printf("%d / %d = %3.3f\n", a, b,(double)a/b);
return 0;
}
//float toPower(int a, int b){

//return pow(a,b);
//}
// Main Function
int main()
{
    int num1;
    int num2;
   
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    
    printf("Enter the second number:\n");
    scanf("%d", &num2);
    
    divide(num1, num2);
  //  printf("%f",toPower(num1, num2));

    

    return 0;
}
// Function Definitions


