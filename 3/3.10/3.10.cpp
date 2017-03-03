/*
Exercise 3.10: Write a program that reads a string of characters including
punctuation and writes what was read but with the punctuation removed.
*/

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string s, noPunc;

    getline(cin, s);

    for (char c : s)
    {
        if (!ispunct(c))
        {
            noPunc += c;
        }
    }

    cout << noPunc << endl;

    return 0;
}