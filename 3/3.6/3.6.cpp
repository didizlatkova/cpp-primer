/*
Use a range for to change all the characters in a string to
X.
*/

#include <iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;
    for (char &c : word)
    {
        c = 'x';
    }

    cout << word << endl;

    return 0;
}