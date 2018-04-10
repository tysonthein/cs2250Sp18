/*
 * =====================================================================================
 *
 *       Filename:  classes.cpp
 *
 *    Description:  classes are the best thing ever!
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:11:13 AM
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

// Constants
class HelloNum
{
    public://sayHello(string name);
           //askYourName();
           void ShowNumber();                   
           void SetNumber(int n); //prototype   //setter
           int GetNumber();                     //getter
           //void favNum(int number);
    //only the dev can see this section
    private:
           int number; //attribute
           //string name;

};

// Function Prototypes

// Main Function
int main()
{
    HelloNum n1;

    n1.SetNumber(4);
    n1.ShowNumber();

    cout << "Number is " << n1.GetNumber() << endl;


    return 0;
}
// Function Definitions

void HelloNum::ShowNumber(){

    cout << "your number is " << number << endl;
    
    return;
}

void HelloNum::SetNumber(int n){
    
    number = n;
    
    return;
}

int HelloNum::GetNumber(){
    
    return number;
}
// Function Prototypes

