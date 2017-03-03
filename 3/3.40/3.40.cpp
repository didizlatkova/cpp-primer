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
    char a1[10] = "hello";
    char a2[] = "world";
    char a3[10] = "";

    strcpy(a3, strcat(a1, a2));

    for (char c : a3)
    {
        cout << c;
    }

    return 0;
}
