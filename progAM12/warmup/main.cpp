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
#include <string>
#include <stdlib.h>

// Constants

// Function Prototype

// Main Function
int main()
{
    int total = 0;
    ItemToPurchase Item1("sock","balls",2,1);
    cout << "item 1" << endl;
    Item1.SetName();
    Item1.GetName();
    Item1.SetPrice();
    Item1.GetPrice();
    Item1.SetQuantity();
    Item1.GetQuantity();
    cout << endl;
    cin.ignore();

    ItemToPurchase Item2("", "", 2, 1);
    cout << "item 2" << endl;
    Item2.SetName();
    Item2.GetName();
    Item2.SetPrice();
    Item2.GetPrice();
    Item2.SetQuantity();
    Item2.GetQuantity();
    cout << endl;
    cin.ignore();
    
    cout << "TOTAL COST" << endl;
    total = total + Item1.PrintItemCost();
    total = total + Item2.PrintItemCost();
    cout << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
// Function Definitions


