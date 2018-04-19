/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.cpp
 *
 *    Description:  Definitions for ShoppingCart class
 *
 *        Version:  1.0
 *        Created:  04/18/2018 08:25:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// #include <stdio.h>   // For C
#include <iostream>     // For C++
#include "ShoppingCart.h"
using namespace std;    // For C++


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Setters and Getters
 *  Description:  Mutators and Accessors for private data members
 * =====================================================================================
 */
void ShoppingCart::SetCustomerName() {
    cin >> customerName;
}
string ShoppingCart::GetCustomerName() const {
    return customerName;
}
void ShoppingCart::SetDate() {
    cin >> currentDate;
}
string ShoppingCart::GetDate() const {
    return currentDate;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  AddItem
 *  Description:  Add item to shopping cart
 * =====================================================================================
 */
void ShoppingCart::AddItem(ItemToPurchase item) {
    string name;
    string desc;
    int price;
    int qty;

    cout << "ADD ITEM TO CART" << endl;
    cout << "Enter the item name:" << endl;
    cin >> name; item.SetName(name);
    cout << "Enter the item description:" << endl;
    cin >> desc; item.SetDescription(desc);
    cout << "Enter the item price" << endl;
    cin >> price; item.SetPrice(price);
    cout << "Enter the item quantity:" << endl;
    cin >> qty; item.SetQuantity(qty);

    cartItems.push_back(item);
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  RemoveItem
 *  Description:  Removes item or displays error
 * =====================================================================================
 */
void ShoppingCart::RemoveItem(string name) {
    for (int i = 0; i < cartItems.size(); i++) {
        if (name == cartItems[i].GetName()) {
            cartItems.erase(cartItems.begin() + i);
            return;
        }
    }

    cout << "Item not found in cart. Nothing Modified." << endl;

}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ModifyItem
 *  Description:  Modifies an item's values
 * =====================================================================================
 */
/*
void ShoppingCart::ModifyItem(ItemToPurchase item) {

}
*/

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumItemsInCart
 *  Description:  Returns the number of items in carts
 * =====================================================================================
 */
int ShoppingCart::GetNumItemsInCart() {
    return cartItems.size();
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetCostofCart
 *  Description:  Returns total cost of items in cart
 * =====================================================================================
 */
int ShoppingCart::GetCostofCart() {
    int total;

    // Calculate total
    for (int i = 0; i < cartItems.size(); i++) {
        total += cartItems[i].GetPrice();
    }

    return total;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintTotal
 *  Description:  Outputs total of objects in cart
 * =====================================================================================
 */
void ShoppingCart::PrintTotal() {
    if (cartItems.size() > 0) {
        cout << "OUTPUT SHOPPING CART" << endl;
        cout << customerName << "'s Shopping Cart - " << currentDate << endl;
        cout << "Number of Items: " <<  cartItems.size() << endl;
        cout << endl;

        // Print item cost
        for (int i = 0; i < cartItems.size(); i++) {
            cartItems[i].PrintItemCost();
        }

        cout << "Total: $" << GetCostofCart() << endl;
    }
    else {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintDescriptions
 *  Description:  Outputs each item's descriptions
 * =====================================================================================
 */
void ShoppingCart::PrintDescriptions() {
    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << endl;

    cout << "Item Descriptions" << endl;
    for (int i = 0; i < cartItems.size(); i++) {
        cartItems[i].PrintItemDescription();
    }
}
