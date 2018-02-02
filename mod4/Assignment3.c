/*
 * =====================================================================================
 *
 *       Filename:  Assignment3.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/01/2018 10:16:42 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

// Constants

// Function Prototypes

// Main Function

int main(void) {
   char serviceP1[5];
   char serviceP2[9];
   char strCat[21];
   char oil[] = "Oil change";
   char tire[] = "Tire rotation";
   char wash[] = "Car wash";
   
   int oilPrice = 35;
   int rotationPrice = 19;
   int washPrice = 7;

   printf("Enter desired auto service:\n");
   scanf("%s %s", serviceP1, serviceP2);
   strcpy(strCat, serviceP1);
   strcat(strCat, " ");
   strcat(strCat, serviceP2);
   
   
   if (strcmp(strCat, oil) == 0) {                               
      printf("You entered: %s\n", oil);
      printf("Cost of oil change: $%d\n", oilPrice);
   }
   else if (strcmp(strCat, tire) == 0) {
      printf("You entered: %s\n", tire);
      printf("Cost of tire rotation: $%d\n", rotationPrice);
   }
   else if (strcmp(strCat, wash) == 0) {
      printf("You entered: %s\n", wash);
      printf("Cost of car wash: $%d\n", washPrice);
   }
   else {
      printf("Error: Requested service is not recognized\n");
   }

   return 0;
}

