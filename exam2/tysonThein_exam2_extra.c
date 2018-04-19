/*
 * =====================================================================================
 *
 *       Filename:  tysonThein_exam2_extra.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/19/2018 10:06:59 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h> //for C
//#include <iostream> // for C++
//using namespace std // for C++

// Constants

// Function Prototypes
typedef struct MyTime_t
{
    int hour;
    int minutes;
    int seconds;
}MyTime;

MyTime SetTime(int hr, int min, int sec);
MyTime ElapseTime(time1, time2);


// Main Function
int main()
{
    MyTime t1 = { 3, 45, 15 }, t2 = { 9, 44, 03 },
           t3 = {22, 50, 59 }, t4 = { 7, 30, 0 };

    MyTime t5 = ElapseTime(t1,t2);

    printf("Time between %d:%d:%d: and %d:%d:%d is %d:%d:%d", t1.hour, t1.minutes, t1.seconds, t2.hour, t2.minutes, t2.seconds, t5.hour, t5.minutes, t5.seconds);
    return 0;
}
// Function Definitions

MyTime SetTime(int hr, int min, int sec){
    MyTime timeStruct;

    timeStruct.hour = hr;
    timeStruct.minutes = min;
    timeStruct.seconds = sec;
    return timeStruct;
}

MyTime ElapseTime(time1, time2){
    MyTime temp;
    temp.hour = time2.hour - time1.hour;
    temp.minutes = time2.minutes - time1.minutes;
    temp.seconds = time2.seconds - time1.seconds;
    return temp;
}

