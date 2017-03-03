/*
Write a program to compare two arrays for equality. Write a
similar program to compare two vectors.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int size = 3;
    // int arr1[size] = {3, 4, 90};
    // int arr2[size] = {3, 4, 9};

    vector<int> arr1(size, 32);
    vector<int> arr2(size, 3);

    for (size_t i = 0; i < size; i++)
    {
        if (arr1[i] != arr2[i])
        {
            cout << "not equal"<<endl;
            return 0;
        }
    }

    cout << "equal"<<endl;

    return 0;
}