/*
 * =====================================================================================
 *
 *       Filename:  ch6_assign.c
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
void PrintMenu(char*);
int GetNumOfNonWSCharacters(const char*);
int GetNumOfWords(const char*);
void FixCapitalization(char*);
void ReplaceExclamation(char*);
void ShortenSpace(char*);


// Main Function
int main()
{
    char userString[MAX];

    printf("Enter a sample text:\n");
    fgets(userString, MAX, stdin);

    printf("\nYou entered: %s\n", userString);

    PrintMenu(userString);
    
    return 0;
}




// Function Definitions
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintMenu
 *  Description:  Prints menu
 * =====================================================================================
 */
void PrintMenu(char* str) {
    char userChoice = ' ';

    printf("MENU\n");
    printf("c - Number of non-whitespace characters\n");
    printf("w - Number of words\n");
    printf("f - Fix capitalization\n");
    printf("r - Replace all !'s\n");
    printf("s - Shorten spaces\n");
    printf("q - Quit\n\n");

    printf("Choose an option:\n");
    scanf("%c", &userChoice);

    switch (userChoice) {
        case 'c':
            printf("Number of non-whitespace characters: %d\n", GetNumOfNonWSCharacters(str));
            break;

        case 'w':
            printf("Number of words: %d\n", GetNumOfWords(str));
            break;

        case 'f':
            FixCapitalization(str);
            printf("%s\n", str);
            break;

        case 'r':
            ReplaceExclamation(str);
            printf("%s\n", str);
            break;

        case 's':
            ShortenSpace(str);
            printf("%s\n", str);
            break;

        default:
            printf("That is not a valid option. Please try again.\n");

    }
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumOfNonwSCharacters
 *  Description:  Returns the number of characters which are not whitespace
 * =====================================================================================
 */
int GetNumOfNonWSCharacters(const char* str) {
    unsigned int count = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (isspace(str[i]) == 0) {
            count++;
        }
    }

    return count;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  MenuChoice
 *  Description:  Implements function based on user choice
 * =====================================================================================
 */
int GetNumOfWords(const char* str) {
    unsigned int count = 0;

    for (int i = 0; i < strlen(str); i++) {     // Loop through string starting at 0
        if (isspace(str[i]) == 0) {         // If index i is not a space
            
            for (int j = i; j < strlen(str); j++) {     // Loop through string starting at i
                if (isspace(str[j]) != 0) {         // If index j is a space
                    count++;
                    i = j;
                    break;
                }

                else if (isspace(str[j]) == '.') {      // If index j is a period
                    count++;
                    break;
                }
            }

        }
    }

    return count;
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  FixCaps
 *  Description:  Fixes any capitalization errors that start sentences
 * =====================================================================================
 */
void FixCapitalization(char* str) {
    
    for (int i = 0; i < strlen(str); i++) {     // Loop through string
        if (isupper(str[0]) == 0) {
            str[0] = toupper(str[0]);
        }
        else if (str[i] == '.') {    // If index i is a period

            for (int j = i; j < strlen(str); j++) {     // Loop through string starting a i
                if (isspace(str[j] != 0)) {     // When for loop reaches a char that isn't a space
                    str[j] = toupper(str[j]);
                    break;
                }
            }

        }
    }

}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Replace
 *  Description:  Replaces exclamation points with a period
 * =====================================================================================
 */
void ReplaceExclamation(char* str) {

    for (int i = 0; i < strlen(str); i++) {

        if (str[i] == '!') {
            str[i] = '.';
        }

    }

}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShortenSpace
 *  Description:  shortens the space in between words
 * =====================================================================================
 */
void ShortenSpace(char* str) {
    
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ' && str[i + 1] == ' ') {
            int j = i;

            do {

                str[j] = str[j + 1];

            }while (str[j] != ' ');
        }
    }

}

