/*
Using pointers, write a program to set the elements in an
array to zero.
*/

#include <iostream>

using namespace std;

int main()
{
    int size = 10;
    int arr[size];
    int *p = arr;
    for (size_t i = 0; i < size; i++)
    {
        *(p + i) = 42;
    }

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}