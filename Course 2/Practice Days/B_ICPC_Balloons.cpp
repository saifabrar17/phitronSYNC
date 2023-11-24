#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sz;
        cin >> sz;
        char ch[sz];
        int cnt[26] = {0};
        for (int i = 0; i < sz; i++)
        {
            cin >> ch[i];
            cnt[ch[i] - 'A']++;
        }
        int bln = 0;
        for (int i = 0; i < 26; i++)
        {
            char c = i + 'A';
            if (cnt[i] != 0)
            {
                if (cnt[i] == 1)
                    bln += 2;
                if (cnt[i] > 1)
                    bln = bln + cnt[i] + 1;
            }
        }
        cout << bln << endl;
    }

    return 0;
}

/* #include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;

        string s;
        cin >> s;

        int flag[26] = {0};

        for (int i = 0; i < size; i++)
        {
            // if (flag[i] == 0)
            // {
            //     ballon++;
            //     // flag[i] = 1;
            //     for (int j = 0; j < size; j++)
            //     {
            //         if (s[i] == s[j])
            //         {
            //             ballon++;
            //             flag[i] = 1;
            //         }
            //     }
            // }
            flag[s[i] - 'A']++;
        }
        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            char ch = i + 'A';
            cout << flag[ch];
            // if (flag[ch] == 1)
            //     cnt += 2;
            // if (flag[ch] > 1)
            //     cnt = flag[ch] + 1 + cnt;
        }
        cout << cnt << endl;
    }

    return 0;
} */