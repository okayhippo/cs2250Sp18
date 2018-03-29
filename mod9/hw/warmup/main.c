/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/2018 08:06:51 PM
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
#include "ItemToPurchase.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    ItemToPurchase itemOne;
    ItemToPurchase itemTwo;
    char itemName[50];

    MakeItemBlank(&itemOne);
    MakeItemBlank(&itemTwo);




    // ITEM ONE
    printf("Item 1\n");
    printf("Enter the item name:\n");
    fgets(itemName, sizeof(itemName), stdin);
    strcpy(itemName, itemOne.itemName);


    printf("Enter the item price:\n");
    scanf("%d", &itemOne.itemPrice);

    printf("Enter the item quantity:\n");
    scanf("%d", &itemOne.itemQuantity);
    printf("\n");

    // Flush the buffer
    getchar();


    // ITEM TWO
    printf("Item 2\n");
    printf("Enter the item name:\n");
    fgets(itemName, sizeof(itemName), stdin);
    strcpy(itemName, itemTwo.itemName);

    printf("Enter the item price:\n");
    scanf("%d", &itemTwo.itemPrice);
    

    printf("Enter the item quantity:\n");
    scanf("%d", &itemTwo.itemQuantity);
    printf("\n");


    // PRINT ITEM
    printf("TOTAL COST\n");
    PrintItemCost(&itemOne);
    PrintItemCost(&itemTwo);
    printf("Total: $%d\n", itemOne.itemTotal + itemTwo.itemTotal);


    return 0;
}
// Function Definitions


