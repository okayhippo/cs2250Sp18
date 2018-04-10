/*
 * =====================================================================================
 *
 *       Filename:  Contacts.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2018 06:26:15 PM
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
#include "Contacts.h"

ContactNode CreateContactNode() {
    ContactNode* node;
    strcpy(node->contactName, "Jane Doe");
    strcpy(node->contactPhoneNum, "555-555-5555");
    node->nextNodePtr = NULL;

    return node;
}


void InsertContactAfter(ContactNode* n1, ContactNode* n2) {
    n1->nextNodePtr = &n2;
}


ContactNode* GetNextContact(ContactNode node) {
    return &node.nextNodePtr;
}


void PrintContactNode() {

}
