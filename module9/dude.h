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
#endif /* ----- #ifndef DUDE__INC__ ----- */


