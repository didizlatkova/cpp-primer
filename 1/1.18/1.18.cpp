/*
Count how many consecutive
times each distinct value appears in the input
*/

#include <iostream>

using namespace std;

int main()
{
    int value, currentValue, count = 0;

    if (cin >> currentValue)
    {
        count = 1;
        while (cin >> value)
        {
            if (value == currentValue)
            {
                ++count;
            }
            else
            {
                cout << currentValue << " occurs " << count << " times " << endl;
                currentValue = value;
                count = 1;
            }
        }
    }

    return 0;
}