/*
Write a program to read the standard input a line at a time.
Modify your program to read a word at a time.
*/

#include <iostream>

using namespace std;

int main()
{
    // string line;

    // while(getline(cin, line))
    // {
    //     cout << line << endl;
    // }

    string word;
    while(cin>>word)
    {
        cout << word << endl;
    }

    return 0;
}