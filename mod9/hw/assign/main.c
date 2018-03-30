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
    
    char name1[50];
    char name2[50];
    int price;
    int qty;

    MakeItemBlank(&itemOne);
    MakeItemBlank(&itemTwo);


    // ITEM ONE
    printf("Item 1\n");
    printf("Enter the item name:\n");
    fgets(name1, sizeof(name1), stdin);
    name1[strlen(name1) - 1] = '\0'; // remove NULL char

    printf("Enter the item price:\n");
    scanf("%d", &price);

    printf("Enter the item quantity:\n");
    scanf("%d", &qty);
    printf("\n");

    // Flush the buffer & insert item vals
    strcpy(itemOne.itemName, name1);
    itemOne.itemPrice = price;
    itemOne.itemQuantity = qty;
    getchar();



    // ITEM TWO
    printf("Item 2\n");
    printf("Enter the item name:\n");
    fgets(name2, sizeof(name2), stdin);
    name2[strlen(name2) - 1] = '\0'; // remove NULL char
    
    printf("Enter the item price:\n");
    scanf("%d", &price);
    

    printf("Enter the item quantity:\n");
    scanf("%d", &qty);
    printf("\n");

    // Flush the buffer & insert item vals
    strcpy(itemTwo.itemName, name2);
    itemTwo.itemPrice = price;
    itemTwo.itemQuantity = qty;
    getchar();


    // PRINT ITEM
    printf("TOTAL COST\n");
    PrintItemCost(&itemOne);
    PrintItemCost(&itemTwo);
    printf("\nTotal: $%d\n", (itemOne.itemPrice * itemOne.itemQuantity) + 
                            (itemTwo.itemPrice * itemTwo.itemQuantity));


    return 0;
}
// Function Definitions


