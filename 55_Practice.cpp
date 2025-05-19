// Write a program in C++ to find the sum of the first 10 natural numbers:
#include <iostream>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cout << "Enter your limit:";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cout << i << " ";
        sum = sum + i;
    }
    cout << "The sum of the number of you limit:" << sum;
    return 0;
}