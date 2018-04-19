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

class ItemToPurchase
{
public:
    ItemToPurchase();
    ItemToPurchase(std::string getName, std::string setDescription, int setPrice, int setQuantity);

    void SetName(std::string a);
    void SetDescription(std::string b);
    void SetPrice(int a);
    void SetQuantity(int b);

    std::string GetName();
    void GetDescription();
    int GetPrice();
    int GetQuantity();

    int PrintItemCost();
    //void PrintItemDescription();

private:
    std::string name;
    std::string description;
    int price;
    int quantity;

};
//void PrintItemCost();
/*
ItemToPurchase::ItemToPurchase();
ItemToPurchase::ItemToPurchase(string name, string description, int price, int quantity);

void ItemToPurchase::SetName(string name);
void ItemToPurchase::SetDescription(string description);
void ItemToPurchase::SetPrice(int price);
void ItemToPurchase::SetQuantity(int quantity);

void ItemToPurchase::GetName();
void ItemToPurchase::GetDescription();
void ItemToPurchase::GetPrice();
void ItemToPurchase::GetQuantity();
*/

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

