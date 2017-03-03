/*
Write a program to compare two strings. Now write a
program to compare the values of two C-style character strings.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s1 = "test";
    string s2 = "test42";

    if (s1 == s2)
    {
        cout << "equal" << endl;
    }
    else if (s1 > s2)
    {
        cout << "s1 is bigger" << endl;
    }
    else
    {
        cout << "s2 is bigger" << endl;
    }

    char a1[] = "test";
    char a2[] = "test42";

    if (strcmp(a1, a2) == 0)
    {
        cout << "equal" << endl;
    }
    else if (strcmp(a1, a2) > 0)
    {
        cout << "s1 is bigger" << endl;
    }
    else
    {
        cout << "s2 is bigger" << endl;
    }

    return 0;
}
