/*
 * =====================================================================================
 *
 *       Filename:  compStrings.c
 *
 *    Description:  Comparing strings
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:05:23 AM
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
    char word[51];
    char word2[51];

    printf("Enter a word:\n");
    scanf("%s", word);

    printf("You entered [%s]\n", word);

    if (strcmp(word, "Hello") == 0) {
        printf("Awesome! They are the same!\n");
    }
    else {
        printf("Sorry, these words do not match...\n");
    }

    strcpy(word2, word);
    printf("word: [%s]\nword2: [%s]\n", word, word2);

    return 0;
}
// Function Definitions


