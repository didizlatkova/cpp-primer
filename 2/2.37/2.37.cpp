/*
Assignment is an example of an expression that yields a
reference type. The type is a reference to the type of the left-hand operand.
That is, if i is an int, then the type of the expression i = x is int&. Using
that knowledge, determine the type and value of each variable in this code:
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 3, b = 4;
    decltype(a) c = a; // c is an int, c = 3;
    decltype(a = b) d = a; // d is a reference to a
    cout << c << " " << d << endl;

    const int s = 42;
    auto f = s;
    f = 66;
    decltype(s) r = 56;
    //r = 44;

    return 0;
}