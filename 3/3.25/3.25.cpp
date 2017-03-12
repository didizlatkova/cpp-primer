/*
Rewrite the grade clustering program from § 3.3.3 (p. 104)
using iterators instead of subscripts.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // count the number of grades by clusters of ten: 0--9, 10--19, . .. 90--99, 100
    vector<unsigned> scores(11, 0); // 11 buckets, all initially 0
    unsigned grade;
    while (cin >> grade)
    {
        if (grade <= 100)
        {
            auto i = scores.begin() + grade / 10;
            ++(*i);
        }
    }

    for (unsigned n : scores)
    {
        cout << n << endl;
    }

    return 0;
}