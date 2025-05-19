// Write a program in C++ to find the first 10 natural numbers:
#include <iostream>
using namespace std;
int main()
{
    int x, n;
    cout << "Enter your input number you want to print:";
    cin >> n;
    for (x = 1; x <= n; x++)
    {
        cout << x << "\n";
    }

    return 0;
}
