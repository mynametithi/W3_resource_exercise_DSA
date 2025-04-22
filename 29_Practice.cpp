// Write a C++ program to input a single-digit number and print it in a rectangular form of 4 columns and 6 rows:
#include <iostream>
using namespace std;

int main()
{
    int x;

    cout << "\n\n Make a rectangular shape by a single digit number :\n";
    cout << "--------------------------------------------------------\n";

    cout << " Input the number : ";
    cin >> x;

    cout << " " << x << x << x << x << endl;
    cout << " " << x << " " << " " << x << endl;
    cout << " " << x << " " << " " << x << endl;
    cout << " " << x << " " << " " << x << endl;
    cout << " " << x << " " << " " << x << endl;
    cout << " " << x << x << x << x << endl;

    cout << endl;

    return 0;
}
