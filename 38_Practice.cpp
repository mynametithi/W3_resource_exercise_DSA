// Write a C++ program that accepts the user's first and last name and prints them in reverse order with a space between them:
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char x[30], y[30];
    cout << "Enter your first name:";
    cin >> x;
    cout << "Enter your last name:";
    cin >> y;
    cout << y << " " << x;
    return 0;
}