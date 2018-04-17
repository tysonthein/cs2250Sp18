/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  function declarations
 *
 *        Version:  1.0
 *        Created:  04/16/2018 07:42:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE_INC__

#include <string>
using namespace std;

class ItemToPurchase
{
public:
    ItemToPurchase();
    ItemToPurchase(string name, string description, int price, int quantity = 1);

    void SetName(string name);
    void SetDescription(String description);
    void SetPrice(int price);
    void SetQuantity(int quantity);

    string GetName() const;
    string GetDescription() const;
    int GetPrice() const;
    int GetQuantity() const;

    void PrintItemCost();
    void PrintItemDescription();

private:
    string itemName;
    string itemDescription;
    int itemPrice;
    int itemQuantity;

};






#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

