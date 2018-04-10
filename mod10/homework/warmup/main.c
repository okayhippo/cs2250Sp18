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

    char name[50];
    char phoneNum[50];


    // PERSON 1
    printf("Person 1\nEnter name:\n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';      // Remove NULL char
    printf("Enter phone number:\n");
    scanf("%s", phoneNum);
    phoneNum[strlen(phoneNum) - 1] = '\0';
    printf("You entered: %s, %s\n\n", name, phoneNum);
    getchar();

    // Input data
    strcpy(p1->contactName, name);
    strcpy(p1->contactPhoneNum, phoneNum);

    // Re-initialize
    strcpy(name, "");
    strcpy(phoneNum, "");


    // PERSON 2
    printf("Person 2\nEnter name:\n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';      // Remove NULL char
    printf("Enter phone number:\n");
    scanf("%s", phoneNum);
    phoneNum[strlen(phoneNum) - 1] = '\0';
    printf("You entered: %s, %s\n\n", name, phoneNum);
    getchar();

    // Input data
    strcpy(p2->contactName, name);
    strcpy(p2->contactPhoneNum, phoneNum);

    // Insert after
    InsertContactAfter(p1, p2);

    // Re-initialize
    strcpy(name,  "");
    strcpy(phoneNum, "");


    // PERSON 3
    printf("Person 3\nEnter name:\n");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';      // Remove NULL char
    printf("Enter phone number:\n");
    scanf("%s", phoneNum);
    phoneNum[strlen(phoneNum) - 1] = '\0';
    printf("You entered: %s, %s\n\n", name, phoneNum);
    getchar();

    // Input data
    strcpy(p3->contactName, name);
    strcpy(p3->contactPhoneNum,  phoneNum);

    // Insert after
    InsertContactAfter(p2, p3);


    return 0;
}
// Function Definitions


