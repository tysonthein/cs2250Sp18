/*
 * =====================================================================================
 *
 *       Filename:  funcStr.c
 *
 *    Description:  practice with string functions
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:04:48 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "superlib.h"
#include "superlib.c"

int main()
{
    char userStr[INPUT_STR_SIZE];

    printf("Enter string with spaces: \n");
    fgets(userStr, INPUT_STR_SIZE, stdin);

    StrSpaceToHyphen(userStr);

    printf("String with hyphens: %s\n", userStr);

    return 0;
}
// Function Definitions

    

