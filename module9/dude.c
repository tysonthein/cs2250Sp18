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

void ShowInfoStruct(SuperDude sd)
{
    printf("your age is [%d]\n", sd.age);
    printf("your weight is [%.2lf]\n", sd.weight);
}

void ShowInfo(int age, double weight)
{
    printf("your age is [%d]\n", age);
    printf("your weight is [%.2lf]\n", weight);
}
