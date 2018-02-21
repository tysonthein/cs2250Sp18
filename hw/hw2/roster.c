/*
 * =====================================================================================
 *
 *       Filename:  roster.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:14:34 PM
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
// Constants
const int PLAYERMAX = 5;
// Function Prototypes

// Main Function
int main()
{
int i;
int j;
int jersey[PLAYERMAX];
int rating[PLAYERMAX];
int menuAction;
int update;
int p;


    for(i = 1; i <= PLAYERMAX; i++){
        printf("Enter player %d's jersey number:\n", i);
        scanf("%d", &jersey[i-1]);
        printf("Enter player %d's rating:\n", i);
        scanf("%d", &rating[i-1]);
    }
    printf("ROSTER\n");
    j = 1;
    for(j = 1; j <= PLAYERMAX; j++){
        printf("Player %d -- Jersey number: %d, Rating: %d\n", j, jersey[j-1], rating[j-1]);
    }
    printf("\n");
    printf("MENU\n");
    printf("u - Update player rating\n");
    printf("a - Output players above a rating\n");
    printf("r - Replace player\n");
    printf("o - Output roster\n");
    printf("q - Quit\n\n");
    printf("Choose an option:\n");
    scanf("%d", &menuAction);
    
    while(menuAction != 'q'){
        if(menuAction == 'u'){
            printf("Enter a jersey number:\n");
            scanf("%d", &update);
               for(p = 1; p <= PLAYERMAX; p++){
                   if(jersey[p] == update){
                        printf("Enter a new rating for player:\n");
                        scanf("%d", &rating[p]);
                        break;
                }
               }
        }
        else if(menuAction == 'a'){


    }
        else if(menuAction == 'r'){

    }
        else if(menuAction == 'o'){
    
    }
       }


    return 0;
}
// Function Definitions


