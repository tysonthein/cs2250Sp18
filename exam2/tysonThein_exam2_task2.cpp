/*
 * =====================================================================================
 *
 *       Filename:  tysonThein_exam2_task2.cpp
 *
 *    Description:  task2
 *
 *        Version:  1.0
 *        Created:  04/19/2018 08:57:28 AM
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

// Function Prototypes
class MyTime
{
     private:
        int hour;
        int minutes;
        int seconds;

     public:
        void SetTime(int hr, int min, int sec);
        void GetTime();   // Define getters and setters here
        MyTime();
        MyTime(int hr, int min, int sec);// Define constructors here
        MyTime operator-(MyTime rhs) ;
};

//void ElapseTime(MyTime t1, MyTime t2);

             //  // calculate elapsed time (assume t2 is later than t1)
             //  MyTime elapsed_time (const MyTime &t1, const MyTime &t2);// Main Function
int main()
{
    MyTime t1(3, 45, 15);
    MyTime t2(9, 44, 03);
    MyTime t3(22, 50, 59);
    MyTime t4(7, 30, 0);
    MyTime t5(0, 0, 0);
    MyTime t6(0, 0, 0);
    MyTime t7(0, 0, 0);
    
    t5 = t2 - t1;
    cout << "Time between ";
    t1.GetTime();
    cout << " and ";
    t2.GetTime();
    cout << " is " ;
    t5.GetTime();
    cout << endl;

    t6 = t1 - t2;
    cout << "Time between ";
    t1.GetTime();
    cout << " and ";
    t2.GetTime(); 
    cout << " is ";
    t6.GetTime();
    cout << endl;

    t7 = t4 - t3;
    cout << "Time between ";
    t3.GetTime();
    cout << " and ";
    t4.GetTime();
    cout << " is ";
    t7.GetTime();
    cout << endl;
   
    return 0;
}
// Function Definitions
    void MyTime::SetTime(int hr, int min, int sec){
        
        hour = hr;
        minutes = min;
        seconds = sec;
        
        return;
    }

    void MyTime::GetTime(){
        cout << hour << ":" << minutes << ":" << seconds;
        
    }

    MyTime::MyTime(){ //default constructor
        hour = 0;
        minutes = 0;
        seconds = 0;
    }

    MyTime::MyTime(int hr, int min, int sec){ //default constructor
        hour = hr;
        minutes = min;
        seconds = sec;
    }

    MyTime MyTime::operator-(MyTime rhs){
        MyTime timeTotal;

        timeTotal.hour     = hour - rhs.hour;
        timeTotal.minutes   = minutes - rhs.minutes;
        timeTotal.seconds   = seconds - rhs.seconds;
        if(timeTotal.hour < 0){
            timeTotal.hour = timeTotal.hour + 24;
        }

        if(timeTotal.minutes < 0)
        {
            timeTotal.hour = timeTotal.hour - 1;
            timeTotal.minutes = timeTotal.minutes + 60;
        }

        if(timeTotal.seconds < 0)
        {
            timeTotal.minutes = timeTotal.minutes - 1;
            timeTotal.seconds = timeTotal.seconds + 60;
        }
            
        
        return timeTotal;
    }

//void ElapseTime(MyTime t1, MyTime t2)
//{
 //   MyTime t3 = t2 - t1;
//}
