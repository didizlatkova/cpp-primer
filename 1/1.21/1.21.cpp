/*
Write a program that reads two Sales_item objects that
have the same ISBN and produces their sum
*/

#include <iostream>
#include "../Book Resources/1/Sales_item.h"

using namespace std;

int main()
{
    Sales_item item1, item2;

    cin >> item1 >> item2;

    cout << "Sum is: " << item1 + item2 << endl;

    return 0;
}