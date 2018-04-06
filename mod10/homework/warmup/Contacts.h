/*
 * =====================================================================================
 *
 *       Filename:  Contacts.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/05/2018 06:26:25 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
typedef struct ContactNode_struct {

    char contactName[50];
    char contactPhoneNum[50];
    struct ContactNode* nextNodePtr;

} ContactNode;

ContactNode* CreateContactNode();
void InsertContactNode();
ContactNode* GetNextContact();
void PrintContactNode();
