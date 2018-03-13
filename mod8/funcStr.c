/*
 * =====================================================================================
 *
 *       Filename:  funcStr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:04:52 AM
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
const int INPUT_STR_SIZE = 50;

// Function Prototypes
void StrSpaceToHyphen(char*, char);
// Main Function
int main()
{
    char userStr[INPUT_STR_SIZE];
    char userSepChar;

    // Prompt user for input
    printf("Enter string with spaces: \n");
    fgets(userStr, INPUT_STR_SIZE, stdin);

    printf("Enter a character to be your separator: \n");
    scanf(" %c", &userSepChar);

    // Call Func to modify user string
    StrSpaceToHyphen(userStr, userSepChar);

    printf("String with hyphens: %s\n", userStr);

    return 0;
}

// Function Definitions
void StrSpaceToHyphen(char modStr[], char c) {
    int i = 0;

    for (i = 0; i < strlen(modStr); ++i) {
        
        if (modStr[i] == ' ') {
            modStr[i] = c;
        }
    }

    return;
}


