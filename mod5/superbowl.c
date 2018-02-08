/*
 * =====================================================================================
 *
 *       Filename:  superbowl.c
 *
 *    Description:  Superbowl fun
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:41:52 AM
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

// Constants

// Function Prototypes

// Main Function
int main()
{
    char qbfn[50] = "";
    char qbln[50] = "";

    printf("Select a QB, ");
    printf("and I'll tell you the number of Superbowl wins: \n");
    printf("Tom Brady\n");
    printf("Peyton Manning\n");
    printf("Eli Manning\n");
    printf("None\n");

    // Get user input
    scanf("%s", qbfn);
    //scanf("%s %s", qbfn, qbln);
    
    if (strcmp(qbfn, "None") == 0) {
        printf("No Super Bowls\n");
    }
    else {
        scanf("%s", qbln);
        printf("Hi %s %s\n", qbfn, qbln);
    }

    return 0;
}
// Function Definitions


