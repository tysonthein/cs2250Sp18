/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 08:44:42 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "ItemToPurchase.h"
// Constants

// Function Prototypes

// Main Function
int main()
{
    ItemToPurchase Item1;
    ItemToPurchase Item2;

    ItemToPurchaseInfo(&Item1);
    fflush(stdin);
    ItemToPurchaseInfo(&Item2);
    

    printf("you put [%s]\n", Item1.itemName);
    printf("you put [%s]\n", Item1.itemDescription);
    printf("you put [%d]\n", Item1.itemPrice);
    printf("you put [%d]\n", Item1.itemQuantity);
   
    printf("you put [%s]\n", Item2.itemName);
    printf("you put [%s]\n", Item2.itemDescription);
    printf("you put [%d]\n", Item2.itemPrice);
    printf("you put [%d]\n", Item2.itemQuantity);

    return 0;
}
// Function Definitions

