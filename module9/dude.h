/*
 * =====================================================================================
 *
 *       Filename:  dude.h
 *
 *    Description:  dude information
 *        Version:  1.0
 *        Created:  03/20/2018 09:18:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  DUDE__INC__
#define  DUDE_INC__
typedef struct SuperDude
{
    int age;
    double weight;
    char sex;
}SuperDude;

struct dude
{
    int age;
    double weight;
    char sex;
};
// Function Prototypes
void ShowInfo(int age, double weight, char sex);
//pass a const address instead of the value
void ShowInfoStruct(const SuperDude* sd);
void InitInfoStruct(SuperDude* sd); //address of superdude type


// Main Function
#endif /* ----- #ifndef DUDE__INC__ ----- */


