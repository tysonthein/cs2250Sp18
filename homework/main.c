/*
 * =====================================================================================
 *
 *       Filename:  M5.c
 *
 *    Description:  Drawing a half arrow(C)
 *
 *        Version:  1.0
 *        Created:  02/12/2018 06:47:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Tyson Thein (), tysonthein@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
// Constants
const char star = '*';
// Function Prototypes

// Main Function
int main()
{
    int arrowBaseHeight;
    int arrowBaseWidth;
    int arrowHeadWidth;
    int i;
    int j;
    int w;
    int y;
    printf("Enter arrow base height:\n");
    scanf("%d", &arrowBaseHeight);
//1)loop to output an arrow base of height arrowBaseHeight.
    printf("Enter arrow base width:\n");
    scanf("%d", &arrowBaseWidth);

    printf("Enter arrow head width:\n");
    scanf("%d", &arrowHeadWidth);
    printf("\n");


    while(arrowHeadWidth <= arrowBaseWidth){
        printf("please choose a arrow head width that is larger than the base");
        scanf("%d", &arrowHeadWidth);
    }
    for(i = 1; i <= arrowBaseHeight; i++ ){
        for(j=1; j <= arrowBaseWidth; j++){
            printf("%c", star);
        }
            printf("\n");
    }
for(y = 0; y <= arrowHeadWidth; arrowHeadWidth--){
    w=1;
    for(w = 1; w <= arrowHeadWidth; w++){
        printf("%c", star);
    }   
       if(y<arrowHeadWidth){
           printf("\n");
       }
       else{
        break;
       }
 }


//2)loop an arrow base of width arrowBaseWidth.use a nested loop in which the inner loop draws the *'s and the outerloop iterates a number of times equal to the height of the arrow base.
    
//3)

//4)

//5)

//6)
    return 0;
}
// Function Definitions


