/*
Which of the following are legal? For those that are illegal,
explain why.
*/

#include <iostream>

using namespace std;

int main()
{
    int i2 = -1; //&r = 0;
 int *const p2 = &i2;
const int i = -1, &r = 0;
const int *const p3 = &i2;
const int *p1 = &i2;
//const int &const r2;
const int i3 = i, &r1 = i;

    return 0;
}