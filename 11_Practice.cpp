// Write a C++ program to add two numbers and accept them from the keyboard:
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, sum;
    cout << "Sum of given two numbers:";
    cout << "---------------------------------\n";
    cout << "Enter your First number:";
    cin >> num1;
    cout << "Enter your second number:";
    cin >> num2;
    sum = num1 + num2;
    cout << "Sum of two numbers:" << sum;
}