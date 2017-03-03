/*
Which of the following are legal? For those that are illegal,
explain why.
*/

#include <iostream>

using namespace std;

int main()
{
    int i, *const cp = &i;
    int *p1, *const p2 = cp;

    const int ic = 6, &r = ic;
    const int *const p3 = &ic;
    const int *p;

    i = ic;
    //p1 = p3;
    //p1 = &ic;
    //p3 = &ic;
    //p2 = p1;
    //ic = *p3;
    return 0;
}