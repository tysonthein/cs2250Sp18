/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 08:44:20 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "ItemToPurchase.h"
#include <string.h>
// Constants

// Function Prototypes

// Main Function
// Function Definitions
void ItemToPurchaseInfo(ItemToPurchase* item)
{
    fflush(stdin);
    char tempName[50];
    char tempDes[50];
    int tempPrice;
    int tempQ;
    
    printf("Enter the item name:\n");
    scanf("%[^\n]%*c",&tempName[0]);
   
    fflush(stdin);
    // item->itemName[50] = tempName[50];
    
    for(int j=0; j < 50; j++){
    item->itemName[j] = tempName[j];
    fflush(stdin);
    }

    printf("Enter the item description:\n");
    scanf("%[^\n]%*c", &tempDes[0]);

    fflush(stdin);
    // item.itemDescription = tempDes;

    
    for(int i=0; i < 50; i++){
    item->itemDescription[i] = tempDes[i];
    fflush(stdin);
    }


    printf("Enter the item price:\n");
    scanf("%d", &tempPrice);
    fflush(stdin);
    item->itemPrice = tempPrice;

    printf("Enter the item quantity:\n");
    scanf("%d", &tempQ);
    fflush(stdin);
    item->itemQuantity = tempQ;

    fflush(stdin);
    fflush(stdout);
    
    
    

}


