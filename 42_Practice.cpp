// Write a C++ program that prints the three highest numbers from a list of numbers in descending order:
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums;

    int n;
    while (cin >> n)
    {
        nums.push_back(n);
    }

    sort(nums.rbegin(), nums.rend());

    for (int i = 0; i != 3; ++i)
    {
        cout << nums[i] << endl;
    }

    return 0;
}
