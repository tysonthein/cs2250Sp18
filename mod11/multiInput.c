/*
 * =====================================================================================
 *
 *       Filename:  multiInput.c
 *
 *    Description:  multiple inputs with scanf
 *
 *        Version:  1.0
 *        Created:  04/03/2018 08:42:25 AM
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
void help(void);
// Main Function
int main()
{
    int a,b;  //
    printf("Enter feet and inches seperated by space:\n");
    scanf("%d %d", &a, &b);
    printf("you said you were %d feet and %d inches tall!\n", a, b);

    if(a > 5)
    {
        printf("Wow you are tall!\n");
    }
    else if(a == 5)
    {
        if(b >= 6){
        printf("You are average!\n");
        }
        else{
        printf("you are short!\n");
        }
    }
    else
    {
        printf("damn shorty you better be talented or smart, cause you tiny!\n");
    }
    //time capture
    //int hour = 0;
    //int min = 0;
    //char amPm[3];
    //printf("Enter the time in this format: HH:MM AM/PM\n");
    //scanf("%2d:%2d %2s", &hour, &min, amPm);
    //printf("the time is %d:%d %s\n", hour, min, amPm );
    help();

    return 0;
}
// Function Definitions

void help(void)
{
 
    int hour = 0;
    int min = 0;
    char amPm[3];
    printf("Enter the time in this format: HH:MM AM/PM\n");
    scanf("%2d:%2d %2s", &hour, &min, amPm);
    printf("the time is %d:%d %s\n", hour, min, amPm );
    return; 
}

