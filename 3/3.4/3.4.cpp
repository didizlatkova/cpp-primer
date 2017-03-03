/*
Write a program to read two strings and report whether the
strings are equal. If not, report which of the two is larger. Now, change
the program to report whether the strings have the same length, and if
not, report which is longer.
*/

#include <iostream>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1.size() == s2.size())
    {
        cout << "Equal" << endl;
    }
    else if (s1.size() > s2.size())
    {
        cout << s1 << " is larger" << endl;
    }
    else
    {
        cout << s2 << " is larger" << endl;
    }

    return 0;
}