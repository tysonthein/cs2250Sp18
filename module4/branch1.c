/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  if statements
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:54:24 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    int age = 10;
    int temp;

    printf("how old are you?\n");
    scanf("%d", &age);
    printf("i is %d\n", age);
    if(age == 21)
    {
        printf("you are the goddamn savior!");
    }
    if(age >= 22)
    {
        temp = age - 21;
        printf("unfortunately you are %d years above being a god!", temp);
    }
    else{
        printf("you are not special anymore...");
    }
        temp = 21 - age;
        printf("you are %d years too young to be cool!", temp);
    }
   
    if(age >= 18)
    {
        printf("you can vote\n");
    }
    else{
        temp = 18 - age;
        printf("you have %d years till you can vote!\n", temp);
    }
    
    if(age >= 21){
        printf("you can also Drink!\n");
    }
    else{
        temp = 21 - age;
        printf("you are too young to drink! %d more years, but get out and vote little whippersnapper!\n", temp);
    }
    
    if (age >= 65) {
        printf("enjoy ssi and your freedoms!\n");
    }
    else{
        temp = 65 - age;
        printf("you have %d more years until retirement, you are almost there!\n", temp);
    }
    
    if (age < 18) {
        printf("you are too young to drink and Vote! Get back to class!\n");
    }
    
    return 0;
}
// Function Definitions


