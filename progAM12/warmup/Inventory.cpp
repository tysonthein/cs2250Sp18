/*
 * =====================================================================================
 *
 *       Filename:  Inventory.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:30:38 AM
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
#include "Inventory.h"
#include <vector>

// Function Prototypes

// Main Function

// Function Definitions

//InventoryItem Constructor
InventoryItem::InventoryItem(string initName, int initQty) {
    itemName = initName;
    itemQuantity = initQty;
return;
}
