/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.cpp
 *
 *    Description:  Class Definition
 *
 *        Version:  1.0
 *        Created:  04/16/2018 06:26:02 PM
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

// Function Prototypes

// Main Function
//
// Function Definitions
class ItemToPurchase_Item
{
Public: 
    void SetName(char ItemName);
    char GetName();
    void SetPrice(double ItemPrice);
    double GetPrice();
    void SetQuantity(int ItemQuantity);
    int GetQuantity();

private: 
    char name[50] = "none";
    double price = 0;
    int quantity = 0;
};

void ItemToPurchase::SetName(char ItemName){
    while(i = 0; i < 10; i++){
        Item.name[i]=ItemName[i];
    }
}

char ItemToPurchase::GetName(){
return name;
}

void ItemToPurchase::SetPrice(double ItemPrice){
   Item.price = ItemPrice;
}

double ItemToPurchase::GetPrice(){
return price;
}

void ItemToPurchase::SetQuantity(int ItemQuantity){
   Item.quantity = ItemQuantity;
}

int ItemToPurchase::GetQuantity(){
return quantity;
}
