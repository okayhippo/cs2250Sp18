/*
 * =====================================================================================
 *
 *       Filename:  Inventory.cpp
 *
 *    Description:  Inventory.h class definitions
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:29:20 AM
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
#include "Inventory.h"
using namespace std;    // For C++

InventoryItem::InventoryItem(string initName, int initQty) {
    itemName = initName;
    itemQuantity = initQty;
}

InventoryItem::PrintItem() const {
    cout << "name: " << this->itemName << ", " << "quantity: " << this->itemQuantity << endl;
}
