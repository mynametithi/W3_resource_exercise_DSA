// Write a C++ program to add all the numbers from 1 to a given number:
#include <iostream>
using namespace std;
int add_1_to_given_neumber(int n)
{
    int total = 0;
    for (int x = 1; x <= n; x++)
    {
        total += x;
    }
    return total;
}
int main()
{
    cout << "\nAdd 1 to 4: " << add_1_to_given_neumber(4);
    cout << "\nAdd 1 to 4: " << add_1_to_given_neumber(100);
    return 0;
}