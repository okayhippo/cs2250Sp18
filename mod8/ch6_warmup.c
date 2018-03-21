/*
 * =====================================================================================
 *
 *       Filename:  ch6_warmup.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 07:29:10 PM
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
#include <ctype.h>

// Constants
const int MAX = 256;

// Function Prototypes
int GetNumOfCharacters(char*);
void OutputWithoutWhitespace(char*);

// Main Function
int main()
{
    char userString[MAX];

    printf("Enter a sentence or phrase:\n");
    fgets(userString, MAX, stdin);

    printf("You entered: %s\n", userString);
    printf("Number of characters: %d\n", GetNumOfCharacters(userString));
    OutputWithoutWhitespace(userString);

    return 0;
}

// Function Definitions
int GetNumOfCharacters(char* u) {
    return strlen(u);
}

void OutputWithoutWhitespace(char* userStr) {
    for (int i = 0; i < strlen(userStr); i++) {
        if (isspace(userStr[i])) {
            for (int i = 0; i < strlen(userStr); i++) {
                userStr[i] = userStr[i + 1];
            }
        }
    }
    
    printf("String with no whitespace: %s\n", userStr);
}
