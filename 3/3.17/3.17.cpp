/*
Read a sequence of words from cin and store the values a
vector. After you’ve read all the words, process the vector and change
each word to uppercase. Print the transformed elements, eight words to a
line.
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string word;
    vector<string> words;

    while (cin >> word)
    {
        words.push_back(word);
    }

    for (string &w : words)
    {
        w[0] = toupper(w[0]);
    }

    for (string w : words)
    {
        cout << w << endl;
    }

    return 0;
}