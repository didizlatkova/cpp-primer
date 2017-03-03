/*
Read a set of integers into a vector. Print the sum of each
pair of adjacent elements. Change your program so that it prints the sum of
the first and last elements, followed by the sum of the second and second-to-
last, and so on.
[using iterators]
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> numbers;
    while (cin >> n)
    {
        numbers.push_back(n);
    }

    int diff = numbers.end() - numbers.begin();

    for (auto i = numbers.begin(); i < numbers.end() - 1; i += 2)
    {
        cout << *i + *(i + 1) << endl;
    }

    for (auto i = numbers.begin(); i < numbers.begin() + diff / 2; i++)
    {
        int offset = numbers.end() - i - 1;
        cout << *i + *(numbers.begin() + offset) << endl;
    }

    return 0;
}