/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  functions to manage items to purchase
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:05:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SHOPPINGCART__INC__
#define  SHOPPINGCART_INC__

#include "ItemsToPurchase.h"

typedef struct ShoppingCart_struct
{
    char customerName[50];
    
    char currentDate[50];
 
    ItemsToPurchase cartItems[10];

    int cartSize;


}ShoppingCart;

ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart);

ShoppingCart RemoveItem(Char name[], ShoppingCart cart);

int GetNumItemsInCart(ShoppingCart cart);

void PrintTotal(ShoppingCart cart);

void PrintDescriptions(ShoppingCart cart);

#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

