/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  Use index notation to access string members
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:42:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
// 1) Define two strings
//
// 2) get fname
//
// 3) get lname
//
// 4) display initials
int main()
{
    //Define variables
    char fname[21];
    char lname[21];

    //Get fname and lname from user
    printf("Please enter your first and last name.\n");
    scanf("%s%s", fname, lname);

    //print name and initials
    printf("Hello %s %s.\n", fname, lname);
    printf("Your initials are %c%c.\n", fname[0], lname[0]);

    return 0;
}
// Function Definitions


