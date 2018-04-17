/*
 * =====================================================================================
 *
 *       Filename:  testInventory.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:35:02 AM
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
#include <string>
#include <vector>
// Constants

// Function Prototypes
void PrintAllItems(vector<InventoryItem*> itemsInventory);
// Main Function
int main()
{

vector<InventoryItem*> storeInventory; // Vector of InventoryItem pointers
   string productName;                    // Name of item in inventory
   int productQuantity = 0;               // Quantity of item in inventory
   string userInput;                      // User command
   int listPos = 0;                       // Position of item in vector
               
   InventoryItem* newItem = nullptr;      // Pointer used to create an item
   InventoryItem* tmp = nullptr;          // Pointer used to lookup an item0;

   PrintCommands();





}
// Function Definitions
void PrintAllItems(vector<InventoryItem*> itemsInventory) {
       int i = 0; // Loop index
          
           //For each item call class member function to print
              for (i = 0; i < itemsInventory.size(); ++i) {
                   cout << i << " - ";
                   (*itemsInventory.at(i)).PrintItem();
              }

return;
}

void PrintCommands() {
       cout << "Valid commands are: add, print, remove, quit" << endl;
          
          return;
}


