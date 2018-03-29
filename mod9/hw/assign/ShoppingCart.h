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

#include "ItemsToPurchase.h"

typedef struct ShoppingCart_s {
    char customerName[50];
    char currentDate[50];
    ItemsToPurchase item;
    int cartSize;
}


ShoppingCart AddItem(ItemToPurchase, ShoppingCart*);
ShoppingCart RemoveItem(ItemToPurchase, ShoppingCart*);
int GetNumItemsInCart(ShoppingCart*);
void PrintTotal(ShoppingCart*);
void PrintDescriptions(ShoppingCart);

#endif
