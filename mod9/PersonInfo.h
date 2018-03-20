/*
 * =====================================================================================
 *
 *       Filename:  PersonInfo.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:21:41 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */


// Structures
typedef struct PersonInfo_struct {
    int age;
    double weight;
}PersonInfo;


// Function Prototypes
void ShowInfo(PersonInfo p);

