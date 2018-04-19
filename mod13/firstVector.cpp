/*
 * =====================================================================================
 *
 *       Filename:  firstVector.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2018 08:45:57 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Gabe Cerritos (), gabrielcerritos@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// #include <stdio.h>   // For C
#include <iostream>     // For C++
#include <vector>
using namespace std;    // For C++

// Constants

// Function Prototypes

// Main Function
int main()
{
    vector<int> v1;
    vector<int>::iterator j;

    // Add elements
    for (int i = 1; i < 5; i++) {
        v1.push_back(i * 2);
    }

    cout << "Output of begin and end" << endl;

    // Use iterator
    for (j = v1.begin(); j != v1.end(); j++) {
        cout << *j << '\t';
    }
    cout << endl;

    // Use array notation
    for (int k = 0; k < v1.size(); k++) {
        cout << v1[k] << '\t';
    }
    cout << endl;

    cout << "Size: " << v1.size() << endl;
    cout << "Capacity: " << v1.capacity() << endl;
    cout << "Max size: " << v1.max_size() << endl;
    

    // Accessing the elements
    // 1) Reference operator [g]: Returns a reference to the element at position 'g'
    // 2) at(g): returns a reference to the element at position 'g'
    // 3) front(): returns a reference to the first element
    // 4) back(): returns a reference to the last element
    cout << "Refenence operator [g]: v1[2] = " << v1[2] << endl;
    cout << "at : v1.at(1) = " << v1.at(1) << endl;
    cout << "front() : v1.front() = " << v1.front() << endl;
    cout << "back() : v1.back() = " << v1.back() << endl;

    return 0;
}
// Function Definitions


