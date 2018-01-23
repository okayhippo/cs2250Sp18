/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  first use of strings
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:04:49 AM
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
int main()
{
    char name[21];  //allocate 20 chars + NULL char
    
    printf("Enter your name:\n");
    scanf("%s", name);
    //Note: If you use an array,
    //DO NOT use the & address operator
    //2) The input ends with a space
    printf("You entered %s.\n", name);

    return 0;
}
// Function Definitions


