/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/2018 06:24:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> //for C
#include <iostream> // for C++
using namespace std; // for C++
#include "ItemToPurchase.h"
// Constants

// Function Prototype

// Main Function
int main()
{
    ItemToPurchase Item1();
    Item1.SetName("Broccoli");
    Item1.GetName();
    Item1.SetPrice(1.99);
    Item1.GetPrice();
    Item1.SetQuantity(4);
    Item1.GetQuantity();





    return 0;
}
// Function Definitions


