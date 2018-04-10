/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2018 08:52:16 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;

// Constants

// Function Prototypes

// Main Function
int main()
{
    int age;
    string name;

    cout << "Hello World C++" << endl;
    cout << "How old are you?" << endl;
    cin >> age;
    cout << "You are " << age << " years old" << endl;

    cin.ignore();
    cout << "What is your name?" << endl;
    getline(cin, name);
    cout << "Hello " << name << endl;

    return 0;
}
// Function Definitions


