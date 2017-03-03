/*
Write a program that reads several transactions and counts
how many transactions occur for each ISBN .
*/

#include <iostream>
#include "../Book Resources/1/Sales_item.h"

using namespace std;

int main()
{
    Sales_item book;
    Sales_item currBook;
    int count = 1;

    cin >> currBook;
    while (cin >> book)
    {
        if (book.isbn() == currBook.isbn())
        {
            ++count;
        }
        else
        {
            cout << "ISBN " << currBook.isbn() << " occurs " << count << " times" << endl;
            currBook = book;
            count = 1;
        }
    }

    return 0;
}