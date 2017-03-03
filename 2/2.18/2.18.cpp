/*
Write code to change the value of a pointer. 
Write code to change the value to which the pointer points.
*/

#include <iostream>

using namespace std;

int main()
{
    int i = 42;
    int *p = nullptr;
    p = &i;

    cout << *p << endl;

    *p = 24;

    cout << i << endl;


    return 0;
}