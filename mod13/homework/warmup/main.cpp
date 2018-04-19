/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main function for ItemToPurchase warmup
 *
 *        Version:  1.0
 *        Created:  04/18/2018 12:30:24 AM
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
using namespace std;    // For C++

// Constants

// Function Prototypes

// Main Function
int main()
{
    ItemToPurchase* itemOne = new ItemToPurchase;
    ItemToPurchase* itemTwo = new ItemToPurchase;

    string name;
    int price;
    int qty;


    // Prompt for itemOne
    cout << "Item 1" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, name);
    cout << "Enter the item price:" << endl;
    cin >> price;
    cout << "Enter the item quantity:" << endl;
    cin >> qty;
    cout << endl;
    cin.ignore();

    // Store itemOne values
    itemOne->SetName(name);
    itemOne->SetPrice(price);
    itemOne->SetQuantity(qty);


    // Prompt for itemTwo
    cout << "Item 2" << endl;
    cout << "Enter the item name:" << endl;
    getline(cin, name);
    cout << "Enter the item price:" << endl;
    cin >> price;
    cout << "Enter the item quantity:" << endl;
    cin >> qty;
    cout << endl;
    cin.ignore();

    // Store itemTwo values
    itemTwo->SetName(name);
    itemTwo->SetPrice(price);
    itemTwo->SetQuantity(qty);


    // Total Cost
    cout << "TOTAL COST" << endl;
    cout << itemOne->GetName() << " " << itemOne->GetQuantity() << " @ $"
        << itemOne->GetPrice() << " = $" << (itemOne->GetQuantity() * itemOne->GetPrice())
        << endl;
    cout << itemTwo->GetName() << " " << itemTwo->GetQuantity() << " @ $"
        << itemTwo->GetPrice() << " = $" << (itemTwo->GetQuantity() * itemTwo->GetPrice())
        << endl;
    cout << endl;

    cout << "Total: $" << ((itemOne->GetQuantity() * itemOne->GetPrice()) + 
                            (itemTwo->GetQuantity() * itemTwo->GetPrice())) << endl;


    return 0;
}
// Function Definitions


