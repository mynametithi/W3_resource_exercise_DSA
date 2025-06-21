// Sum of first 10 natural number:
#include <iostream>
using namespace std;
int main()
{
    int i, sum = 0;
    cout << "First natural number are:" << endl;
    for (i = 1; i <= 10; i++)
    {
        cout << i << " ";
        sum = sum + i;
    }
    cout << endl;
    cout << "Sum of First natural number:" << sum;
    return 0;
}