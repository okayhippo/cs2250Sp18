/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 08:56:58 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

#ifndef ITEMTOPURCHASE_H_
#define ITEMTOPURCHASE_H_

typedef struct ItemToPurchase_struct {
    char itemName[50];
    char itemDescription[50];
    int itemPrice;
    int itemQuantity;
}ItemToPurchase;

void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(ItemToPurchase* item);
void PrintItemDescription(ItemToPurchase* item);

#endif
