/*
Write a program to initialize a vector from an array of
ints.
*/

#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int a1[] = {2, 5, 9};
    vector<int> v;

    for (size_t i = 0; i < sizeof(a1)/sizeof(*a1); i++)
    {
        v.push_back(a1[i]);
    }

    for (int e : v)
    {
        cout << e << endl;
    }

    return 0;
}
