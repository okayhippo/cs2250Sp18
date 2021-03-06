/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  ItemToPurchase class declaration
 *
 *        Version:  1.0
 *        Created:  04/18/2018 12:15:13 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef _ITEMTOPURCHASE_H_
#define _ITEMTOPURCHASE_H_

#include <iostream>
#include <string>
using namespace std;

class ItemToPurchase {
    private:
        string itemName;
        int itemPrice;
        int itemQuantity;

    public:
        ItemToPurchase() : itemName("none"), itemPrice(0), itemQuantity(0) {}
        
        // Getters & Setters
        void SetName(string name);
        string GetName() const;

        void SetPrice(int price);
        int GetPrice() const;

        void SetQuantity(int qty);
        int GetQuantity() const;
};

#endif
