/*
Write a program to read strings from the standard input,
concatenating what is read into one large string. Print the concatenated
string. Next, change the program to separate adjacent input strings by a
space.
*/

#include <iostream>

using namespace std;

int main()
{
    string word;
    string concatenated;
    while (cin >> word)
    {
        concatenated += word;
        concatenated += " ";
    }

    cout << concatenated << endl;

    return 0;
}