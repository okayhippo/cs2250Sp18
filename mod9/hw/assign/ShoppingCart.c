/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.c
 *
 *    Description:  Function defs for ShoppingCart.h
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:16:12 AM
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
#include "ShoppingCart.h"

// Constants

// Function Definitions
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  AddItem
 *  Description:  * Add a ItemToPurchase to ShoppingCart
 *
 *                * Increment
 * =====================================================================================
 */
ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart) {

   

        if (cart.cartSize == 0) {
            cart.cartItems[0] = item;
            cart.cartSize++;
        }
        else if (cart.cartSize > 0) {
            cart.cartItems[cart.cartSize] = item;
            cart.cartSize++;
        }

    return cart;

}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  RemoveItem
 *  Description:  * Remove an ItemToPurchase based on the name of the item from
 *                  ShoppingCart
 *              
 *                * Decrement
 * =====================================================================================
 */
ShoppingCart RemoveItem(char name[], ShoppingCart cart) {

    // 1) strcmp to find the item
    // cart.cartItems[Index].name
    //
    // 2) IF you find it, adjust your index in the array
    // cart.cartItems[Index] = cart.cartItems[Index + 1];
    // ELSE print no item
    for (int i = 0; i < cart.cartSize; i++) {

        if (strcmp(cart.cartItems[i].itemName, name) == 0) {

            cart.cartItems[i] = cart.cartItems[i + 1];
            cart.cartSize--;

        }

        else if ((cart.cartSize - 1) && strcmp(cart.cartItems[i].itemName, name) != 0) {
            printf("Item not found in cart. Nothing removed\n");
        }

    }

    return cart;

}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ModifyItem
 *  Description:  Modifies and item's description, price and/or quantity
 * =====================================================================================
 */
ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart) {
    ItemToPurchase newItem;

    printf("CHANGE ITEM QUANTITY\n");
    printf("Enter the item name:\n");
    fgets(newItem.itemName, sizeof(newItem.itemName), stdin);
    newItem.itemName[strlen(newItem.itemName) - 1] = '\0';

    printf("Enter the new quantity:\n");
    scanf("%d", &newItem.itemQuantity);

    for (int i = 0; i < cart.cartSize; i++) {

        if (strcmp(newItem.itemName, cart.cartItems[i].itemName) == 0) {

            item = newItem;

        }

    }

    return cart;

}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumItemsInCart
 *  Description:  Get the number of items located in the cart
 * =====================================================================================
 */
int GetNumItemsInCart(ShoppingCart cart) {

    return cart.cartSize;

}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetCostOfCart
 *  Description:  returns total cost of items in cart
 * =====================================================================================
 */
int GetCostOfCart(ShoppingCart cart) {
    int total = 0;

    for (int i = 0; i < cart.cartSize; i++) {

        total += cart.cartItems[i].itemPrice;

    }

    return total;

}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintTotal
 *  Description:  Print the total price of the items in cart
 * =====================================================================================
 */
void PrintTotal(ShoppingCart cart) {
    int total;

    if (cart.cartSize > 0) {

        printf("%s's Shopping Cart - %s\n", cart.customerName, cart.currentDate);
        printf("Number of Items: %d\n", GetNumItemsInCart(cart));
        printf("\n");

        // Loop to display PrintItemCost and add to total
        for (int i = 0; i < cart.cartSize; i++) {
            total += cart.cartItems[i].itemPrice;
        }

        printf("Total: %d\n", total);

    }
    else  if (cart.cartSize == 0) {

        printf("SHOPPING CART IS EMPTY\n");
        printf("\n");
        printf("Total: $0");

    }


}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintDescriptions
 *  Description:  Print the descriptions of the items in the cart
 * =====================================================================================
 */
void PrintDescriptions(ShoppingCart cart) {

    printf("%s's Shopping Cart - %s\n", cart.customerName, cart.currentDate);
    printf("\n");
    
    printf("Item Descriptions\n");
    
    // Loop to display item descriptions;
    for (int i = 0; i < cart.cartSize; i++) {
        printf("%s: %s\n", cart.cartItems[i].itemName, cart.cartItems[i].itemDescription);
    }

}


