/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  update map positions:
 *                  X coord and y coord
 *
 *        Version:  1.0
 *        Created:  02/22/2018 09:17:22 AM
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
const int X = 0;
const int Y = 1;
const int DIM = 2;
// Function Prototypes
// 1) initialize your Point to (0,0)
void PointInit(int* xa, int* ya); //pass by reference
// 2) move or update point position
void ShowPoint(int x, int y); //pass by value
// 3) update pos value
void MovePoint(int newx, int newy, int* xa, int* ya);
// Main Function
int main()
{
 //   int point[DIM];
    int x = 99;
    int y = 99;
    PointInit(&x,&y);
   // point[DIM] = PointInit(x,y);
    ShowPoint(x,y);
    MovePoint(4, 5, &x, &y);
    ShowPoint(x,y);
    return 0;
}
// Function Definitions
void PointInit(int* xa, int* ya){
    //to update the values at a given address
    // use the de-reference operator "*"
    ShowPoint(*xa,*ya);//values at address
    *xa = 0;
    *ya = 0;
    ShowPoint(*xa,*ya);
    return ;
}
void ShowPoint(int x, int y){
    printf("X-Position = [%d]\n", x);
    printf("Y-Position = [%d]\n", y);
    return;
}
void MovePoint(int newx, int newy, int* xa, int* ya){
    printf("new X-value: \n");
    scanf("%d", &newx);
    printf("New Y-Value: \n");
    scanf("%d", &newy);
    *xa = newx;
    *ya = newy;
    ShowPoint(*xa, *ya);
}
