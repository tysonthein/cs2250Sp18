/*
 * =====================================================================================
 *
 *       Filename:  hw3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:07:42 AM
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

// Main Function
int main()
{
nclude <stdio.h>
    #include <string.h>

    int main(void) {

           char firstServ[51] = "";
              char secondServ[51] = "";
                 int oilPrice = 35;
                    int tirePrice = 19;
                       int carWashP = 7;
                          int carWaxP = 12;
                             int totalP = 0;
                                int firstP = 0;
                                   int secondP = 0;

                                      printf("Davy's auto shop services\n"
                                                 "Oil change -- $35\n"
                                                    "Tire rotation -- $19\n"
                                                       "Car wash -- $7\n"
                                                          "Car wax -- $12\n");

                                         printf("\nSelect first service:\n");
                                            scanf("%[^/n]s", firstServ);
                                               
                                               printf("Select second service:\n");             //prompt 2 services
                                                  scanf("%[^/n]s", secondServ);

                                                     
                                                     printf("\nDavy's auto shop invoice\n\n");
                                                       //while(strcmp(firstServ, "-")!=0){
                                                             if(strcmp(firstServ, "Oil change")==0){
                                                                     printf("Service 1: %s, $%d\n", firstServ, oilPrice);
                                                                               firstP = oilPrice;
                                                                                   //    break;
                                                                                        }
                                                                                                else if(strcmp(firstServ, "Tire rotation")==0){
                                                                                                        printf("Service 1: %s, $%d\n", firstServ, tirePrice);
                                                                                                                  firstP = tirePrice;
                                                                                                                        //   break;
                                                                                                                              }
                                                                                                                                    else if(strcmp(firstServ, "Car wash")==0){
                                                                                                                                             printf(""Tue"Tuesday, 06 February 2018"day, 06 February 2018"ervice 1: %"Tue"Tuesday, 06 February 2018"day, 06 February 2018", $%d\n", fir"Tue"Tuesday, 06 February 2018"day, 06 February 2018"t"Tue"Tuesday, 06 February 2018"day, 06 February 2018"erv, carWa"Tue"Tuesday, 06 February 2018"day, 06 February 2018"hP);
                                                                                                                                                      firstP = carWashP;
                                                                                                                                                           //   break;
                                                                                                                                                                 }
                                                                                                                                                                       else if(strcmp(firstServ, "Car wax")==0){
                                                                                                                                                                                printf("\nService 1: %s, $%d\n", firstServ, carWaxP);
                                                                                                                                                                                         firstP = carWaxP;
                                                                                                                                                                                              //    break;
                                                                                                                                                                                                    }
                                                                                                                                                                                                      //}
                                                                                                                                                                                                        
                                                                                                                                                                                                              else if(strcmp(firstServ, "-")==0){
                                                                                                                                                                                                                       printf("Service 1: No service");
                                                                                                                                                                                                                                firstP = 0;
                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                      //while(strcmp(secondServ, "-")!=0){
                                                                                                                                                                                                                                            if(strcmp(secondServ, "Oil change")==0){
                                                                                                                                                                                                                                                     printf("\nService 2: %s, $%d\n", secondServ, oilPrice);
                                                                                                                                                                                                                                                              secondP = oilPrice;
                                                                                                                                                                                                                                                                   //    break;      
                                                                                                                                                                                                                                                                         }
                                                                                                                                                                                                                                                                               else if(strcmp(secondServ, "Tire rotation")==0){
                                                                                                                                                                                                                                                                                        printf("Service 2: %s, $%d\n", secondServ, tirePrice);
                                                                                                                                                                                                                                                                                                 secondP = tirePrice;
                                                                                                                                                                                                                                                                                                     //     break;
                                                                                                                                                                                                                                                                                                           }
                                                                                                                                                                                                                                                                                                                 else if(strcmp(secondServ, "Car wash")==0){
                                                                                                                                                                                                                                                                                                                          printf("Service 2: %s, $%d\n", secondServ, carWashP);
                                                                                                                                                                                                                                                                                                                                   secondP = carWashP;
                                                                                                                                                                                                                                                                                                                                      //      break;
                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                  else if(strcmp(secondServ, "Car wax")==0){
                                                                                                                                                                                                                                                                                                                                                           printf("Service 2: %s, $%d\n", secondServ, carWaxP);
                                                                                                                                                                                                                                                                                                                                                                    secondP = carWaxP;
                                                                                                                                                                                                                                                                                                                                                                      //       break;
                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                              //}
                                                                                                                                                                                                                                                                                                                                                                                    else if(strcmp(secondServ, "-")==0){
                                                                                                                                                                                                                                                                                                                                                                                             printf("Service 2: No service");
                                                                                                                                                                                                                                                                                                                                                                                                      secondP = 0;
                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                 totalP = firstP + secondP;
                                                                                                                                                                                                                                                                                                                                                                                                                      printf("\nTotal: $%d\n", totalP);
                                                                                                                                                                                                                                                                                                                                                                                                                         return 0;
                                                                                                                                                                                                                                                                                                                                                                                                                         }

    return 0;
}
// Function Definitions


