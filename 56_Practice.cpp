// Write a program in C++ to display n terms of natural numbers and their sum:
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "Enter your limit:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << i << "\n";
        sum = sum + i;
    }
    cout << "Input the number of terms:" << n << "\n";
    cout << "The sum of the number of you limit:" << sum;
    return 0;
}