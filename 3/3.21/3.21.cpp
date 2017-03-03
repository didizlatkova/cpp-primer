/*
Write a program to read a sequence of ints from cin and
store those values in a vector.
[using iterators]
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> numbers(4);
    auto i = numbers.begin();
    while (cin >> n)
    {
        *i = n;
        i++;
    }

    for (size_t i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }

    return 0;
}