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
#include "ShoppingCart.h"

// Constants

// Function Prototypes
void PrintMenu(ShoppingCart*);

// Main Function
int main()
{
    ShoppingCart cartOne;

    // Prompt and store user generated values
    // values used for name and date
    printf("Enter Customer's Name:\n");
    fgets(cartOne.customerName, sizeof(cartOne.customerName), stdin);
    cartOne.customerName[strlen(cartOne.customerName) - 1] = '\0';

    printf("Enter Today's Date:\n");
    fgets(cartOne.currentDate, sizeof(cartOne.currentDate), stdin);
    cartOne.currentDate[strlen(cartOne.currentDate) - 1] = '\0';

    printf("Customer Name: %s\n", cartOne.customerName);
    printf("Today's Date: %s\n", cartOne.currentDate);


    PrintMenu(&cartOne);


    return 0;
}




// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintMenu
 *  Description:  Prints menu and implements based on userChar
 * =====================================================================================
 */
void PrintMenu(ShoppingCart* cart) {
    char userChar;
    char itemName[50] = "none";
    int qty;


    do {

        // MENU
        printf("MENU\n");
        printf("a - Add item to cart\n");
        printf("r - Remove item from cart\n");
        printf("c - Change item quantity\n");
        printf("i - Output items' descriptions\n");
        printf("o - Output shopping cart\n");
        printf("q - Quit\n");
        printf("\n");
        printf("Choose and option\n");
        scanf("%c", &userChar);


        // Determine implementation based on userChar
        if (userChar == 'o' || userChar == 'O') {
                printf("OUTPUT SHOPPING CART\n");
                PrintTotal(cart);
        }
        else if (userChar == 'i' || userChar == 'I') {
                printf("OUTPUT ITEMS' DESCRIPTIONS\n");
                PrintDescriptions(cart);
        }
        else if (userChar == 'a' || userChar == 'A') {
                // Create new item and make blank
                ItemToPurchase item;
                MakeItemBlank(&item);

                printf("ADD ITEM TO CART\n");

                // Get item details
                printf("Enter the item name:\n");
                scanf("%s", item.itemName);
                printf("Enter the item description:\n");
                scanf("%s", item.itemDescription);
                printf("Enter the item price:\n");
                scanf("%d", &item.itemPrice);
                printf("Enter the item quantity:\n");
                scanf("%d", &item.itemQuantity);
        }
        else if (userChar == 'r' || userChar == 'R') {
                printf("REMOVE ITEM FROM CART\n");
                printf("Enter name of item to remove:\n");
                scanf("%s", itemName);
                RemoveItem(itemName, cart);
        }
        else if (userChar == 'c' || userChar == 'C') {
                printf("CHANGE ITEM QUANTITY\n");
                printf("Enter the item name:\n");
                scanf("%s", itemName);
                printf("Enter the new quantity:\n");
                scanf("%d", &qty);
        }
        else if (userChar == 'q' || userChar == 'Q') {
            userChar = 'q';
        }

    } while (userChar != 'q' &&  userChar != 'Q');

}
