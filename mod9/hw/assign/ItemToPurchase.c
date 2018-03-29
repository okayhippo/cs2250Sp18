/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/27/2018 09:04:13 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include "ItemToPurchase.h"

// Constants

// Function Definitions

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  MakeItemBlank
 *  Description:  * Sets itemName, itemQuantity, and itemPrice to "none", 0, 0
 * =====================================================================================
 */
void MakeItemBlank(ItemToPurchase* item) {

    strcpy(item->itemName, "none");
    strcpy(item->itemDescription, "none");
    item->itemQuantity = 0;
    item->itemPrice = 0;
    
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemCost
 *  Description:  * Prints itemName itemQuantity @ $itemPrice = $itemTotal
 * =====================================================================================
 */
void PrintItemCost(ItemToPurchase* item) {

    printf("%s %d @ $%d = $%d\n", item->itemName, item->itemQuantity, item->itemPrice, item->itemPrice * item->itemQuantity);

}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintItemDescription
 *  Description:  Prints item description
 * =====================================================================================
 */
void PrintItemDescription(ItemToPurchase* item) {

    printf("%s: %s", item->itemName, item->itemDescription);

}
