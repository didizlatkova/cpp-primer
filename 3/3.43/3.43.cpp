/*
Write three different versions of a program to print the
elements of ia. One version should use a range for to manage the
iteration, the other two should use an ordinary for loop in one case using
subscripts and in the other using pointers. In all three programs write all the
types directly. That is, do not use a type alias, auto, or decltype to
simplify the code.
*/

#include <iostream>

using namespace std;

int main()
{
    constexpr size_t rowCnt = 3, colCnt = 4;
    int ia[rowCnt][colCnt]; // 12 uninitialized elements
    // for each row
    for (size_t i = 0; i != rowCnt; ++i)
    {
        // for each column within the row
        for (size_t j = 0; j != colCnt; ++j)
        {
            // assign the element's positional index as its value
            ia[i][j] = i * colCnt + j;
        }
    }

    // Rewrite the programs from the previous exercises using a
    // type alias for the type of the loop control variables.
    using int_array = int[colCnt];

    // version 1 - for range
    // for (int_array &row : ia)
    // {
    //     for (int col : row)
    //     {
    //         cout << col << "-";
    //     }
    //     cout << endl;
    // }

    // version 2 - subscripts
    // for (size_t i = 0; i < rowCnt; i++)
    // {
    //     for (size_t j = 0; j < colCnt; j++)
    //     {
    //         cout << ia[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    // version 3 - pointers
    for (int_array *i = ia; i != ia + rowCnt; i++)
    {
        for (int *j = *i; j != *i + colCnt; j++)
        {
            cout << *j << " ";
        }
        cout << endl;
    }

    return 0;
}
