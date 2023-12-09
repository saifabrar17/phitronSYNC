#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    int alphabet_size = 26;
    vector<int> frequency(alphabet_size, 0);

    for(char c: s){
        frequency[c - 'a']++;
    }

    for (int i = 0; i < alphabet_size; i++)
    {
        if(frequency[i] > 0){
            char letter = i + 'a';
            cout<<  letter << " " << ":"<<" "<<frequency[i]<<endl;
        }
    }
    


    return 0;
}