/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/02/2018 05:07:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "Contacts.h"
// Constants

// Function Prototypes
struct ContactNode_struct();
// Main Function
int main()
{
    struct ContactNode Person1;
    struct ContactNode Person2;            //initializing nodes
    struct ContactNode Person3;

    printf("Person 1\n");
    CreateContactNode(ContactNode* Person1);    //creating node
    PrintContactNode(ContactNode Person1);      //printing node

    printf("Person 2\n");
    CreateContactNode(ContactNode* Person2);
    PrintContactNode(ContactNode Person2);

    printf("Person 3\n");
    CreateContactNode(ContactNode* Person3);
    PrintContactNode(ContactNode Person3);
    return 0;
}
// Function Definitions
struct ContactNode_struct(ContactNode* nextNodePtr)    //node structure
{
char contactName[50];
char contactPhoneNum[50];
}

void CreateContactNode(ContactNode* Person)                        //node creation
{
   fprintf(stdout, "Enter name:\n");
    fgets(contactName, "%s", stdin);
    fflush(stdin);
    printf("Enter phone number:\n");
    fgets(contactPhoneNum, "%s", stdin):
    fflush(stdin);
    printf("You entered: %s, %s", contactName, contactPhoneNum);
}

void InsertContactAfter()                                        //inserting node after current
{


}

void GetNextContact()                                            //asking for the next node
{

}

char PrintContactNode(ContactNode Person)                         //printint contact node
{
    printf("Name: %s", ContactNode.contactName);
    printf("Phone number: %s", ContactNode.contactPhoneNum);
}

