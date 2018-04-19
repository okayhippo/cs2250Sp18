/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2018 08:28:07 PM
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
#include "ItemToPurchase.h"
#include "ShoppingCart.h"
using namespace std;    // For C++

// Constants

// Function Prototypes
void PrintMenu(ShoppingCart);

// Main Function
int main()
{
    ShoppingCart cart;

    string name;
    string date;

    cout << "Enter customer's name:" << endl;
    getline(cin, name);
    cart.SetCustomerName(name);

    cout << "Enter today's date:" << endl;
    getline(cin, date);
    cart.SetDate(date);
    cout << endl;

    cout << "Customer name: " << cart.GetCustomerName() << endl;
    cout << "Today's date: " << cart.GetDate() << endl;
    cout << endl << endl;

    PrintMenu(cart);

    return 0;
}


// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintMenu
 *  Description:  Prints and implements program menu
 * =====================================================================================
 */
void PrintMenu(ShoppingCart cart) {
    char userChoice;

    do {
        cout << "MENU" << endl;
        cout << "a - Add item to cart" << endl;
        cout << "d - Remove item from cart" << endl;
        cout << "c - Change item quantity" << endl;
        cout << "i - Output items' descriptions" << endl;
        cout << "o - Output shopping cart" << endl;
        cout << "q - Quit" << endl;
        cout << endl;

        cout << "Choose an option:" << endl;
        cin >> userChoice;
        cin.ignore();

        if (userChoice == 'q') {
            return;
        }
        else if (userChoice == 'o') {
            cart.PrintTotal();
        }
        else if (userChoice == 'i') {
            cart.PrintDescriptions();
        }
        else if (userChoice == 'a') {
            ItemToPurchase item;
            cart.AddItem(item);
        }
        else if (userChoice == 'd') {
            string name;

            cout << "REMOVE ITEM FROM CART" << endl;
            cout << "Enter name of item to remove:" << endl;
            getline(cin, name);

            cart.RemoveItem(name);
        }
        else if (userChoice == 'c') {
            ItemToPurchase item;

            cart.ModifyItem(item);
        }
    } while (userChoice != 'q');
}
