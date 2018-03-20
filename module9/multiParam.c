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

// Constants
typedef struct SuperDude
{
    int age;
    double weight;
}SuperDude;

struct dude
{
    int age;
    double weight;
};
// Function Prototypes
void ShowInfo(int age, double weight);
void ShowInfoStruct(SuperDude sd);
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
