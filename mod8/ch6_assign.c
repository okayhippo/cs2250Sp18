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
void PrintMenu();
void MenuChoice(char*);
void Count(char, char*);
void FixCaps(char*);
void Replace(char*);
void Shorten(char*);


// Main Function
int main()
{
    char userString[MAX];

    printf("Enter a sample text:\n");
    fgets(userString, MAX, stdin);

    printf("\nYou entered: %s\n", userString);

    PrintMenu();
    MenuChoice(userString);
    
    return 0;
}





// Function Definitions
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumOfCharacters
 *  Description:  returns how many characters in the given string
 * =====================================================================================
 */
int GetNumOfCharacters(char* u) {
        return strlen(u);
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Outputwithoutwhitespace
 *  Description:  outputs string without any whitespace
 * =====================================================================================
 */

void OutputWithoutWhitespace(char* userStr) {
        for (int i = 0; i < strlen(userStr); i++) {
        
        if (isspace(userStr[i])) {
            
           userStr[i] = userStr[i + 1];

           for (int j = i + 1; j < strlen(userStr); j++) {
                userStr[j] = userStr[j + 1];
           }

        }

    }
    
    printf("String with no whitespace: %s\n", userStr);
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintMenu
 *  Description:  Prints menu
 * =====================================================================================
 */
void PrintMenu() {
    printf("MENU\n");
    printf("c - Number of non-whitespace characters\n");
    printf("w - Number of words\n");
    printf("f - Fix capitalization\n");
    printf("r - Replace all !'s\n");
    printf("s - Shorten spaces\n");
    printf("q - Quit\n\n");
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  MenuChoice
 *  Description:  Implements function based on user choice
 * =====================================================================================
 */
void MenuChoice(char* str) {
    char userChoice = ' ';

    printf("Choose an option:\n");
    scanf("%c", &userChoice);

    switch (userChoice) {
        case 'c':
            Count(userChoice, str);
            break;

        case 'w':
            Count(userChoice, str);
            break;

        case 'f':
            FixCaps(str);
            printf("%s\n", str);
            break;

        case 'r':
            Replace(str);
            printf("%s\n", str);
            break;

        case 's':
            Shorten(str);
            printf("%s\n", str);
            break;

        default:
            break;
    }
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Count
 *  Description:  Counts either non-whitespaces or words
 * =====================================================================================
 */
void Count(char c, char* str) {
    unsigned int count = 0;

    if (c == 'c') {
        
        for (int i = 0; i < strlen(str); i++) {
            if (isspace(str[i]) == 0) {
                count++;
            }
        }



        printf("Number of non-whitespace characters: %d\n", count);

    }
    else if (c == 'w') {
        for (int i = 0; i < strlen(str); i++) {
            if (isspace(str[i]) == 0 && isspace(str[i + 1]) != 0) {
                count++;
            }
        }

        printf("Number of words: %d\n", count);

    }
}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  FixCaps
 *  Description:  Fixes any capitalization errors that start sentences
 * =====================================================================================
 */
void FixCaps(char* str) {
    
    for (int i = 0; i < strlen(str); i++) {

        if (str[i] == '.') {
            for (int j = i; j < strlen(str); j++) {

                if (isspace(str[j] != 0)) {
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
void Replace(char* str) {

    for (int i = 0; i < strlen(str); i++) {

        if (str[i] == '!') {
            str[i] = '.';
        }

    }

}



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Shorten
 *  Description:  
 * =====================================================================================
 */
void Shorten(char* str) {
    for (int i = 0; i < strlen(str); i++) {

        if (str[i] == ' ' && str[i + 1] == ' ') {
            int j = i;

            do {

                str[j] = str[j + 1];

            }while (str[j] != ' ');
        }

    }
}

