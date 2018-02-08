/*
 * =====================================================================================
 *
 *       Filename:  enum.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:40:54 AM
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

// Enumerations
enum LightState {LS_RED, LS_GREEN, LS_YELLOW, LS_DONE};

// Main Function
int main()
{
    enum LightState lightVal;
    char userCmd;

    lightVal = LS_RED;
    userCmd = '-';

    printf("User commands: n (next), r (red), q (quit).\n\n");

    lightVal = LS_RED;
    while (lightVal != LS_DONE) {

        if (lightVal == LS_GREEN) {
            printf("Green light  ");
            scanf(" %c", &userCmd);
            if (userCmd == 'n') { // Next
                lightVal = LS_YELLOW;
            }
        }
        else if (lightVal == LS_YELLOW) {
            printf("Yellow light  ");
            scanf(" %c", &userCmd);
            if (userCmd == 'n') { // Next
                lightVal = LS_RED;
            }
        }
        else if (lightVal == LS_RED) {
            printf("Red light  ");
            scanf(" %c", &userCmd);
            if (userCmd == 'n') { // Next
                lightVal = LS_GREEN;
            }
        }

        if (userCmd == 'r') { // Force immediate red
            lightVal = LS_RED;
        }
        else if (userCmd == 'q') { // Quit
            lightVal = LS_DONE;
        }
    }

    printf("Quit program.\n");

    return 0;
}
// Function Definitions


