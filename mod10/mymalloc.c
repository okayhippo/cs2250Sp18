/*
 * =====================================================================================
 *
 *       Filename:  mymalloc.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/2018 08:42:03 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int num;
    int* sa = NULL;

    printf("How many numbers do you need?\n");
    scanf("%d", &num);

    // malloc(<#bytes>)
    // %lu for long unsigned
    printf("int is [%lu] bytes\n", sizeof(int));
    printf("int array of [%d] is [%lu] bytes\n", num, num * sizeof(int));

    // cast address to point type
    // (<type>*)
    sa = (int*)malloc(num * sizeof(int));
    for(int i = 0; i < num; i++) {

        sa[i] = i + 10;

    }

    // Display the array
    for (int i = 0; i < num; i++) {

        printf("Element %d: [%d]\n", i + 1, sa[i]);

    }
    free(sa);

    return 0;
}
// Function Definitions


