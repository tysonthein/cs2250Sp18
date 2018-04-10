/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  hello hello!
 *
 *        Version:  1.0
 *        Created:  04/10/2018 08:41:44 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> for C
#include <iostream> // for C++
using namespace std;//For C++ standard name

// Constants

// Function Prototypes

// Main Function
int main()
{
    int age;
    string name;
    //std::cout << "Hello World C++" << std::endl; //used when namespace isnt specified

    
    cout << "Hello World C++" << endl;
    cout << "how old are you?" << endl;
    cin >> age;
    cout << "you are " << age << " years old" << endl;
    cin.ignore();
    cout << "what is your name?" << endl;
    cin >> name; //take input up to first space
    // TODO: i need to take care of enter key from previous cin call.
    //getline(cin, name); //take all input including spaces
    
    cout << "you are " << name << "." << endl;
    return 0;
}
// Function Definitions


