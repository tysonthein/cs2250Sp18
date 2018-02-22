/*
 * =====================================================================================
 *
 *       Filename:  velocity.c
 *
 *    Description:  change distance and time to velocity format
 *
 *        Version:  1.0
 *        Created:  02/22/2018 08:38:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
double velocity(double distance, double timeInHrs);
double timeInS(double timeInHrs);
double distInM(double distance);
double velocityInSecs(double distInM, double timeInSecs);
// Main Function
int main()
{
    double distance;
    double timeInHrs;
    double vel;
    double distInMet; 
    double timeInSec;
    double velInSecs;

    printf("How far did you travel in Kilometers?\n");
    scanf("%lf", &distance);

    printf("How long did the trip take? (hours)\n");
    scanf("%lf", &timeInHrs);
    vel = velocity((double)distance,(double) timeInHrs);
    timeInS = timeInS((double)timeInHrs);
    distInM = distInM((double)distance);
    velInSecs = velocityInSecs((double)distInM,(double) timeInS);
    printf("you traveled %lf km in %lf hours\n", distance, timeInHrs);
    printf("your average velocity is %lfkm/hr.\n", vel);
    printf("which means you traveled about %lfM per second.", velInSecs);
    
iouble velocity(double distance, double timeInHrs){
    
    return distance/timeInHrs;
}
double velocityInM(){
    return 0;
}
// Function Definitions
double velocity(double distance, double timeInHrs){
    return distance/timeInHrs;
}
double timeInS(double timeInHrs){
    return timeInHrs * 3600;
}
double distInM(double distance){
    return distance * 1000;
}
double velocityInSecs(double distInM, double timeInS){
    return distInM / timeInS;
}
