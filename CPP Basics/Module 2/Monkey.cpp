#include <bits/stdc++.h>

using namespace std;

int main()
{
    string input_words;

    while (getline(cin, input_words))
    {
        string sorted_string;
        for (int i = 0; i < input_words.size(); ++i)
        {
            char c = input_words[i];
            if (c != ' ')
            {
                sorted_string += c;
            }
        }

        sort(sorted_string.begin(), sorted_string.end());

        for (int i = 0; i < sorted_string.size(); ++i)
        {
            cout << sorted_string[i];
        }
        cout << endl;
    }

    return 0;
}