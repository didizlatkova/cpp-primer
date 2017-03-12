/*
Write a program to create a vector with ten int elements.
Using an iterator, assign each element a value that is twice its current value.
Test your program by printing the vector.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numbers{5, 3, 8, 9, 12};

    for (auto i = numbers.begin(); i != numbers.end(); i++)
    {
        *i = 2 * *i;        
    }

    for(int n : numbers)
    {
        cout << n << endl;
    }

    return 0;
}