/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  Map coordinates
 *
 *        Version:  1.0
 *        Created:  02/22/2018 09:18:03 AM
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
const int X = 0;
const int Y = 1;
const int DIM = 2;

// Function Prototypes
// Initialize point to (0, 0)
void MapStart(int*, int*);

void DisplayPosition(int, int);

void UpdatePoint(int*, int*);

// Main Function
int main()
{
    int x = -99;
    int y = -99;

    MapStart(&x, &y);
    DisplayPosition(x, y);
    UpdatePoint(&x, &y);
    DisplayPosition(x, y);

    return 0;
}

// Function Definitions
// Initialize point
void MapStart(int* x, int* y) {
    x = 0;
    y = 0;
    printf("POINT INITIALIZED\n");
}

// Display X and Y values
void DisplayPosition(int x, int y) {
    printf("X-Position = [%d]\n", x);
    printf("Y-Position = [%d]\n\n", y);
}

void UpdatePoint(int* x, int* y) {
    printf("Enter your new X value: ");
    scanf("%d", x);

    printf("Enter your new Y value: ");
    scanf("%d", y);

    printf("POINT HAS BEEN UPDATED\n\n");
}
