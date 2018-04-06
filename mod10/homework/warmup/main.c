/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2018 06:26:31 PM
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


// Main Function
int main()
{
    ContactNode* p1 = CreateContactNode();
    ContactNode* p2 = CreateContactNode();
    ContactNode* p3 = CreateContactNode();


    // PERSON 1
    printf("Person 1\nEnter name:\n");
    fgets(p1->contactName, sizeof(p1->contactName), stdin);
    p1->contactName[strlen(p1->contactName) - 1] = '\0';      // Remove NULL char
    printf("Enter phone number:\n");
    scanf("%s", p1->contactPhoneNum);
    p1->contactPhoneNum[strlen(p1->contactPhoneNum) - 1] = '\0';
    printf("You entered: %s, %s\n\n", p1->contactName, p1->contactPhoneNum);
    getchar();

    // PERSON 2
    printf("Person 2\nEnter name:\n");
    fgets(p2->contactName, sizeof(p2->contactName), stdin);
    p2->contactName[strlen(p2->contactName) - 1] = '\0';      // Remove NULL char
    printf("Enter phone number:\n");
    scanf("%s", p2->contactPhoneNum);
    p2->contactPhoneNum[strlen(p2->contactPhoneNum) - 1] = '\0';
    printf("You entered: %s, %s\n\n", p2->contactName, p2->contactPhoneNum);
    getchar();

    // PERSON 3
    printf("Person 3\nEnter name:\n");
    fgets(p3->contactName, sizeof(p3->contactName), stdin);
    p3->contactName[strlen(p3->contactName) - 1] = '\0';      // Remove NULL char
    printf("Enter phone number:\n");
    scanf("%s", p3->contactPhoneNum);
    p3->contactPhoneNum[strlen(p3->contactPhoneNum) - 1] = '\0';
    printf("You entered: %s, %s\n\n", p3->contactName, p3->contactPhoneNum);
    getchar();


    return 0;
}
// Function Definitions


