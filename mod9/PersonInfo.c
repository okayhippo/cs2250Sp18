/*
 * =====================================================================================
 *
 *       Filename:  PersonInfo.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:23:59 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "PersonInfo.h"

// Function Definitions
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfo
 *  Description:  Display age
 * =====================================================================================
 */
void ShowInfo(PersonInfo p) {
    printf("Your age is [%d]\n", p.age);
    printf("Your weight is [%.2lf]\n", p.weight);
}


