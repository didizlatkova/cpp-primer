/*
Read a set of integers into a vector. Print the sum of each
pair of adjacent elements. Change your program so that it prints the sum of
the first and last elements, followed by the sum of the second and second-to-
last, and so on.
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

    for (size_t i = 0; i < numbers.size() - 1; i += 2)
    {
        cout << numbers[i] + numbers[i + 1] << endl;
    }

    for (size_t i = 0; i < numbers.size() / 2; i++)
    {
        cout << numbers[i] + numbers[numbers.size() - i - 1] << endl;
    }

    return 0;
}