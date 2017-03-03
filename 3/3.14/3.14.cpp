/*
Write a program to read a sequence of ints from cin and
store those values in a vector.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> ints;
    while (cin >> n)
    {
        ints.push_back(n);
    }

    return 0;
}