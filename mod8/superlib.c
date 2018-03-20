/*
 * =====================================================================================
 *
 *       Filename:  superlib.c
 *
 *    Description:  Super function definitions
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:37:23 AM
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
#include "superlib.h"
#include <ctype.h>

// Function Definitions
// FUNC: replace spaces with a char
// RET:  void
void StrSpaceToHyphen(char modStr[], char c) {
    int i = 0;

    for (i = 0; i < strlen(modStr); ++i) {
        
        if (modStr[i] == ' ') {
            modStr[i] = c;
        }
    }

    return;
}

// FUNC: counts number of digits
// RET:  returns count
int StrCountDigits(char modStr[]) {
    unsigned int count = 0;

    for (int i = 0; i < strlen(modStr); i++) {
        
        if (isdigit(modStr[i]) != 0) {
            count++;
        }
    }

    return count;
}
