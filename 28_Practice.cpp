// Write a C++ program to compute the total and average of four numbers:
#include <iostream>
using namespace std;
int main()
{
    float n1, n2, n3, n4, total, aveg;
    cout << "Enter 1st porsion two numbers for stores:\n";
    cin >> n1 >> n2;
    cout << "Enter 2nd porsion two numbers for stores:\n";
    cin >> n3 >> n4;
    total = n1 + n2 + n3 + n4;
    aveg = total / 4;
    cout << "average of four numbers:" << aveg;
    return 0;
}