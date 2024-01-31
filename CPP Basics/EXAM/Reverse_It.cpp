#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    string section;
    int cls;
    int id;
};

int main()
{
    int n;
    cin >> n;

    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id;
    }
    for (int i = 0; i < n / 2; i++)
    {
        swap(a[i].section, a[n - 1 - i].section);
    }
    // reverse(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << endl;
    }

    return 0;
}