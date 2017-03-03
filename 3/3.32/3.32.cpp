/*
Copy the array you defined in the previous exercise into
another array. Rewrite your program to use vectors.
*/

#include <iostream>

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

    return 0;
}