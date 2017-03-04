/*
Write a program that prompts the user for two integers.
Print each number in the range specified by those two integers
*/

#include <iostream>

using namespace std;

int main()
{
    int lower, upper;
    cout << "Lower bound: ";
    cin >> lower;

    cout << "Upper bound: ";
    cin >> upper;

    if (lower > upper)
    {
        int temp = lower;
        lower = upper;
        upper = temp;
    }

    while (lower < upper)
    {
        cout << lower << endl;
        lower++;
    }

    return 0;
}