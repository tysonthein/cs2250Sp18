/*
 * =====================================================================================
 *
 *       Filename:  logicalComp.c
 *
 *    Description:  logic practice with if statements
 *
 *        Version:  1.0
 *        Created:  02/01/2018 08:45:37 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
int grade;
bool success = true;

    printf("Please, enter your grade: \n");
    scanf("%d", &grade);

if(grade >= 90 && grade <= 100){
    
    printf("You got an A!\n");
}

else if(grade >= 80 && grade < 90){
    
    printf("You got an B.\n");
}


else if(grade >= 70 && grade < 80){
    
    printf("You got an C...\n");
}

else{
    
    printf("You got an E. sorry bud. you are gonna have to take this class again.\n");
    
    success = false;
}
if(success)
{
    printf("Congrats! you got a %d\n", grade);
}
else{
    
    printf("you got a %d... See you next semester.\n", grade);
}
    return 0;
}
// Function Definitions


