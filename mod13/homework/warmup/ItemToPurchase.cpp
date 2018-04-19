/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2018 12:24:04 AM
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


void ItemToPurchase::SetName(string name)  {
    itemName = name;
}
string ItemToPurchase::GetName() const {
    return itemName;
}

void ItemToPurchase::SetPrice(int price) {
    itemPrice = price;
}
int ItemToPurchase::GetPrice() const {
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int qty) {
    itemQuantity = qty;
}
int ItemToPurchase::GetQuantity() const {
    return itemQuantity;
}


