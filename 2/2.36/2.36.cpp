/*
In the following code, determine the type of each variable
and the value each variable has when the code finishes:
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;   // c is an int, c = 3
    decltype((b)) d = a; // d is a reference to a
    cout << c << " " << d << endl;

    ++c; // c = 4
    ++d; // a = 4
    cout << c << " " << d << endl;

    return 0;
}