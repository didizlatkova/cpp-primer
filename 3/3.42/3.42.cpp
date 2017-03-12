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
    int a1[v.size()];

    for (size_t i = 0; i < v.size(); i++)
    {
        a1[i] = v[i];
    }

    for (int e : a1)
    {
        cout << e << endl;
    }

    return 0;
}
