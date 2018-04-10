/*
 * =====================================================================================
 *
 *       Filename:  firstClass.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:11:34 AM
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
using namespace std;    // For C++


// Classes
class HelloNum {
    private:
        int num;

    public:
        void setNum(int userNum) {
            num = userNum;
        }

        int getNum() const {
            return num;
        }

        void showNum() const {
            cout << "Your number is " << num << endl;
        }
};


// Main Function
int main()
{
    HelloNum numOne;

    numOne.setNum(54);
    cout << numOne.getNum() << endl;
    numOne.showNum();

    return 0;
}
// Function Definitions


