// Write a program in C++ to check whether a number is positive, negative or zero:
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number you want to check:";
    cin >> num;
    if (num > 0)
    {
        cout << "The number is Positive.";
    }
    else if (num < 0)
    {
        cout << "The number is Negative.";
    }
    else
    {
        cout << "The number is 0";
    }
    return 0;
}