#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count;

    cout << "enter size of array" << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int flag[n] = {0};

    for (int i = 0; i < n; i++)
    {
        count = 0;
        if (flag[i] != 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    flag[j] = 1;
                }
            }
            if (count > 1 || count == 1)
            {
                cout << arr[i] << " occur " << count << " times" << endl;
            }
        }
    }

    return 0;
}