/*
 * =====================================================================================
 *
 *       Filename:  reversefor.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/08/2018 10:01:35 AM
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
    char name[] = "Waldo Weber";
    
    printf("%s", name);
    
    // FIX ME: infinite loop
    for (int i = sizeof(name); sizeof(name) > 0; i--) {
        printf("%c ", name[i]);
    }

    return 0;
}
// Function Definitions


