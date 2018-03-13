/*
 * =====================================================================================
 *
 *       Filename:  sentences.c
 *
 *    Description:  Play with sentences
 *
 *        Version:  1.0
 *        Created:  03/13/2018 08:52:19 AM
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
const int STR_SIZE = 128;

// Function Prototypes

// Main Function
int main()
{
    char fullName[STR_SIZE];
    printf("Please enter your full name: ");
    //scanf("%s", fullName);
    fgets(fullName, STR_SIZE, stdin);
    // printf("Hi [%s]", fullName);

    for (int i = 0; i < strlen(fullName); i++) {
        printf("%c", fullName[i]);
    }

    return 0;
}

// Function Definitions


