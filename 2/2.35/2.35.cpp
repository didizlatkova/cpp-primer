#include <iostream>

using namespace std;

int main()
{
    const int i = 42;
    auto j = i; // j is of type int
    j = 24;

    const auto &k = i; // k is a const reference to int
    //k = 54;
    
    auto *p = &i; // p is a pointer to const int
    //*p = 56;
    p = &j;

    const auto j2 = i, &k2 = i; // j2 is a const int, k2 is a const reference to int
    //j2 = 89;
    //k2 = 90;

    return 0;
}