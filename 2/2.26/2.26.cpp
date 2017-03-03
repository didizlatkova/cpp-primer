/*
Which of the following are legal? For those that are illegal,
explain why.
*/

#include <iostream>

using namespace std;

int main()
{
    const int buf;
    int cnt = 0;
    const int sz = cnt;
    ++cnt; 
    ++sz;

    return 0;
}