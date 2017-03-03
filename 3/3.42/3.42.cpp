/*
Write a program to copy a vector of ints into an array of
ints.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v = {2, 5, 9};
    int a1[3];

    for (size_t i = 0; i < sizeof(a1) / sizeof(*a1); i++)
    {
        a1[i] = v[i];
    }

    for (int e : a1)
    {
        cout << e << endl;
    }

    return 0;
}
