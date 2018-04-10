/*
 * =====================================================================================
 *
 *       Filename:  personClass.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:49:06 AM
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
#include <string>
using namespace std;    // For C++


// Classes
class Person {
    private:
        int age;
        string name;
        double weight;

    public:
        void SetAge(int userAge);
        int GetAge() const;

        void SetName(string userName);
        string GetName() const;

        void SetWeight(double userWeight);
        double GetWeight() const;
};


// Main Function
int main()
{
    Person p1;
    p1.SetName("Waldo");
    p1.SetAge(21);
    p1.SetWeight(185.2);

    cout << "Name: " << p1.GetName();

    return 0;
}

// Function Definitions
void Person::SetAge(int userAge) {
    age = userAge;
}
int Person::GetAge() const {
    return age;
}

void Person::SetName(string userName) {
    name = userName;
}
string Person::GetName() const {
    return name;
}

void Person::SetWeight(double userWeight) {
    weight = userWeight;
}
double Person::GetWeight() const {
    return weight;
}


