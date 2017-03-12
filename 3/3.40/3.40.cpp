/*
Write a program to define two character arrays initialized
from string literals. Now define a third character array to hold the
concatenation of the two arrays. Use strcpy and strcat to copy the two
arrays into the third.
*/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char a1[] = "hello";
    char a2[] = "world";
    char a3[sizeof(a1) + sizeof(a2) - 1];

    strcpy(a3, a1);
    strcat(a3, a2);

    for (char c : a3)
    {
        cout << c;
    }

    return 0;
}
