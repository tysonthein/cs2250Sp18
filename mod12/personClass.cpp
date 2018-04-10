/*
 * =====================================================================================
 *
 *       Filename:  personClass.cpp
 *
 *    Description:  more classes yey
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:49:07 AM
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
class Person
{
    public:
        void SetAge(int a);
        int GetAge();
        void SetName(string n);
        string Getname();
        void SetWeight(double w);
        double GetWeight();
    private:
        int age;
        string name;
        double weight;
};
// Function Prototypes

// Main Function
int main()
{
Person Tyson;

Tyson.SetAge(21);
Tyson.SetName("Tyson");
Tyson.SetWeight(140);

Tyson.GetAge();
Tyson.Getname();
Tyson.GetWeight();

    return 0;
}
// Function Definitions
void Person::SetAge(int a){
age = a;
return;
}

int Person::GetAge(){
cout << "your age is " << age << "." << endl;
return age;
}

void Person::SetName(string n){
name = n;
return;
}

string Person::Getname()
{
cout << "your name is " << name << endl;
return name;
}

void Person::SetWeight(double w)
{
weight = w;
return;
}

double Person::GetWeight()
{
cout << "your weight is " << weight << endl;
return weight;
}
