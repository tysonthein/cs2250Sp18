/*
 * =====================================================================================
 *
 *       Filename:  dude.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:18:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "dude.h"
// Constants
// Function Definitions

void ShowInfoStruct(const SuperDude* sd)
{
    printf("your age is [%d]\n", sd->age);
    printf("your weight is [%.2lf]\n", sd->weight);
    printf("your sex is [%c]\n", sd->sex);
}

void ShowInfo(int age, double weight, char sex)
{
    printf("your age is [%d]\n", age);
    printf("your weight is [%.2lf]\n", weight);
    printf("your sex is [%c]\n", sex);
}
void InitInfoStruct(SuperDude* sd)
{ //when using an address of a structure use the -> operator to access struct members
  //instead of the . operator
    sd->age = -99;
    sd->weight = -99.00;
    (*sd).sex = 'N'; // alternative way of updating the values the address points to.
    return;
}
