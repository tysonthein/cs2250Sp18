/*
 * =====================================================================================
 *
 *       Filename:  Inventory.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:31:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  INVENTORY__INC__
#define  INVENTORY_INC_
#include <string>
#include <vector>

class InventoryItem {
    public:
        void PrintItem();
        InventoryItem(string initName = "", int initQty = 0);
    private:
        string itemName;  // Name of item
        int itemQuantity; // Number of items available
};

InventoryItem::PrintItem() {
       cout << "name: " << this->itemName << ", " << "quantity: "
                   << this->itemQuantity << endl;
          
          return;
}


#endif /* ----- #ifndef INVENTORY__INC__ ----- */

