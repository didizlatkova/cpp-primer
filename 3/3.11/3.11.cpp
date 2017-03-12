/*
Is the following range for legal? If so, what is the type of
c?
*/

#include <iostream>

using namespace std;

int main()
{
    const string s = "Keep out!";

    for (auto &c : s)
    { /* ...  */
    }

    return 0;
}