/*
Revise the loop that printed the first paragraph in text to
instead change the elements in text that correspond to the first paragraph
to all uppercase. After you’ve updated text, print its contents.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> text{"lal", "text", "", "omg"};
    for (auto it = text.begin(); it != text.end() && !it->empty(); ++it)
    {
        for (char &c : *it)
        {
            c = toupper(c);
        }
    }

    for(string s : text)
    {
        cout << s << endl;
    }

    return 0;
}