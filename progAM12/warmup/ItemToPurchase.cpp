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
//#include <vector>
// Constants

// Function Prototypes

// Main Function
//
// Function Definitions
/*class ItemToPurchase {
Public: 
    ItemToPurchase();
    void SetName(string setName);
    string GetName()const;
    
    void SetDescription(string setDescription);
    string GetDescription()const;

    void SetPrice(int setPrice);
    double GetPrice();

    void SetQuantity(int setQuantity);
    int GetQuantity();

private: 
    string name[50] = "none";
    string description[50] = "none";
    int price = 0;
    int quantity = 0;
};
*/

ItemToPurchase::ItemToPurchase()
{   name = "none";
    description = "none";
    price = 0;
    quantity = 0;
}

ItemToPurchase::ItemToPurchase(string setName, string setDescription, int setPrice, int setQuantity){
    name = setName;
    description = setDescription;
    price = setPrice;
    quantity = setQuantity;
}

void ItemToPurchase::SetName(string a){
    cout << "Enter the item name:" << endl;
    cin >> name;
}

string ItemToPurchase::GetName(){
    cout << "Name: " << name << endl;
    return name;
}

void ItemToPurchase::SetPrice(int a){
    cout << "Enter the item price:" << endl;
    cin >> price;
}

int ItemToPurchase::GetPrice(){
    cout << "Price: " << price << endl;
    return price;
}

void ItemToPurchase::SetQuantity(int b){
    cout << "Enter the item quantity:" << endl;
    cin >> quantity;
}

int ItemToPurchase::GetQuantity(){
    cout << "Quantity: " << quantity << endl;
    return quantity;
}

void ItemToPurchase::SetDescription(string b){
    cout << "Enter the item Description:" << endl;
    //getline(cin,description);
}

void ItemToPurchase::GetDescription(){
    cout << "Description: " << description << endl;
}

int ItemToPurchase::PrintItemCost(){
    int cost1 = 0;
    cost1 = price;
    int q1 = 0;
    q1 = quantity;
    int tot = 0;
    tot = cost1 * q1;
   // cout << "TOTAL COST" << endl;
    cout << name << " " << quantity << " " << "@ $" << price << endl;
   // cout << endl;
   // cout << "Total: $" << tot << endl;
    return tot;
}


