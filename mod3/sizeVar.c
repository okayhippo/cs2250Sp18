/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description:  Learning about variable sizes in bytes
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:59:58 AM
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
    int num = 1;
    unsigned int unum = 1;
    num *= 10000;
    unum *= 10000;

    // sizeof: returns the size of a variable in bytes
    // What is the range of an int?
    // 2^32 ~ 4,294,000,000 = int combinations
    // Range: -(i/2) to + (i/2 -1)
    printf("The sizeof int is %ld\n", sizeof(num));
    printf("The sizeof uint is %ld\n", sizeof(unum));

    printf("num = [%d]. unum = [%d].\n", num, unum);
    
    num *= 10000;
    unum *=10000;
    printf("num = [%d]. unum = [%d].\n", num, unum);
    
    num *= 10000;
    unum *= 10000;
    printf("num = [%d]. unum = [%u].\n", num, unum);

    return 0;
}
// Function Definitions


