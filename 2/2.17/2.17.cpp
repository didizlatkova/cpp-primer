/*
What does the following code print?
*/

#include <iostream>

using namespace std;

int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl;

    return 0;
}