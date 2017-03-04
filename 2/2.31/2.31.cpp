/*
Given the declarations in the previous exercise determine
whether the following assignments are legal. Explain how the top-level or
low-level const applies in each case.
*/

#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    const int v2 = 0;
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;

    r1 = v2;
    //p1 = p2;
    p2 = p1;
    //p1 = p3;
    p2 = p3;

    int null = 0, *p = &null;

    return 0;
}