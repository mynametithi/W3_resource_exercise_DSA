// Write a C++ program that takes a number as input and prints its multiplication table up to 10:
#include <iostream>
using namespace std;
int main()
{
    int n, i = 0;
    cout << "Enter your number you want to multiplication:";
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        cout << n << " * " << i << " = " << n * i << "\n";
    }
}