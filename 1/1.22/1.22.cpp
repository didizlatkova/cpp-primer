/*
Write a program that reads several transactions for the same
ISBN . Write the sum of all the transactions that were read.
*/

#include <iostream>
#include "../Book Resources/1/Sales_item.h"

using namespace std;

int main()
{
    Sales_item item, sum;

    cin >> item;
    sum = item;

    while(cin>>item)
    {
        sum += item;
    }

    cout << "Sum is: " << sum << endl;

    return 0;
}