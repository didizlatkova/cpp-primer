/*
Write a program to define an array of ten ints. Give each
element the same value as its position in the array.
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

    return 0;
}