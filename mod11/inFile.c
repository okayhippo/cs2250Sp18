/*
 * =====================================================================================
 *
 *       Filename:  inFile.c
 *
 *    Description:  Read data from a separate file
 *
 *        Version:  1.0
 *        Created:  04/03/2018 09:17:22 AM
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
#define NUM 4       // Identical to:
                    // const int NUM = 4;

// Function Prototypes

// Main Function
int main()
{
    //int data[NUM];
    int* userNums;
    unsigned int arrSize = 0;
    FILE* inFile = NULL;
    printf("Opening file data.txt\n");

    // Open file for reading
    inFile = fopen("data.txt", "r");
    
    // Test for open success
    if (inFile == NULL) {
        printf("Could not open file\n");
        return -1;
    }
    // Scan file
    fscanf(inFile, "%d", &arrSize);
    printf("arrSize[%d]\n", arrSize);

    // Allocate memory
    userNums = (int*)malloc(sizeof(int) * arrSize);

    if (userNums == NULL) {
        printf("Unable to allocate memory");
        fclose(inFile);
        return -2;
    }

    // arrSize is the first member of the file
    // the Header record indicates how many members there are
    int i = 1;
    while (i < arrSize) {
        fscanf(inFile, "%d", &(userNums[i - 1]));
        i++;
    }

    // Print records
    i = 0;
    while (i < arrSize) {
        printf("Numbers [%d]\n", userNums[i]);
        i++;
    }

    // Close and clean
    fclose(inFile);
    free(userNums);

    return 0;
}
// Function Definitions


