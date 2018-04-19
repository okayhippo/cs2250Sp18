/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  Class declaration for ShoppingCart.h
 *
 *        Version:  1.0
 *        Created:  04/18/2018 08:22:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#ifndef _SHOPPINGCART_H_
#define _SHOPPINGCART_H_

#include <string>
#include <vector>
#include "ItemToPurchase.h"
using namespace std;

class ShoppingCart {
    private:
        string customerName;
        string currentDate;
        vector<ItemToPurchase> cartItems;

    public:
        ShoppingCart() : customerName("none"), currentDate("January 1, 2016") {}
        ShoppingCart(string name, string date) : customerName(name), currentDate(date) {}
        
        void SetCustomerName();
        string GetCustomerName() const;
        void SetDate();
        string GetDate() const;

        void AddItem(ItemToPurchase);
        void RemoveItem(string);
        //void ModifyItem(ItemToPurchase);

        int GetNumItemsInCart();
        int GetCostofCart();
        void PrintTotal();
        void PrintDescriptions();
};

#endif
