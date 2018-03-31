/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  Functions to manage ItemsToPurchase
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:05:49 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#ifndef SHOPPINGCART_INC__
#define SHOPPINGCART_INC__

#include "ItemToPurchase.h"

typedef struct ShoppingCart_struct {
    char customerName[50];
    char currentDate[50];
    ItemToPurchase cartItems[10];
    unsigned int cartSize;
}ShoppingCart;


ShoppingCart AddItem(ItemToPurchase, ShoppingCart);
ShoppingCart RemoveItem(char[], ShoppingCart);
ShoppingCart ModifyItem(ItemToPurchase, ShoppingCart);

int GetNumItemsInCart(ShoppingCart);
void PrintTotal(ShoppingCart);
void PrintDescriptions(ShoppingCart);

#endif
