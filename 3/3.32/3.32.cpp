/*
Copy the array you defined in the previous exercise into
another array. Rewrite your program to use vectors.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int arr[10];
    for (size_t i = 0; i < 10; i++)
    {
        arr[i] = i;
    }

    int copied[10];
    for (size_t i = 0; i < 10; i++)
    {
        copied[i] = arr[i];
    }

    // Rewritten using vectors:
    vector<int> vec(10);
    for (size_t i = 0; i < 10; i++)
    {
        vec.push_back(i);
    }

    vector<int> copiedVec(10);
    for (size_t i = 0; i < 10; i++)
    {
        copiedVec.push_back(vec[i]);
    }

    return 0;
}