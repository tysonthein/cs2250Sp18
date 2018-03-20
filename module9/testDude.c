/*
 * =====================================================================================
 *
 *       Filename:  multiParam.c
 *
 *    Description:  using multiple parameters
 *
 *        Version:  1.0
 *        Created:  03/20/2018 08:56:11 AM
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

// Main Function
int main()
{
    //int a = 17;
    //double w = 172.5;
    struct dude man1;
    man1.age = 32;              // use dot operator to access members of struct
    man1.weight = 186.9;
    ShowInfo(man1.age, man1.weight);

    SuperDude man2;
    man2.age = 22;
    man2.weight = 286.9;
    ShowInfoStruct(man2);

    return 0;
}
// Function Definitions

