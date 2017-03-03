/*
Write your own version of a program that prints the sum of
a set of integers read from cin.
*/

#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;

    while (cin >> n)
    {
        sum += n;
    }

    cout << sum << endl;

    return 0;
}