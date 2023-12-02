#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin >> n;
    Student a[n];
    // Student *a = new Student[n];

    for (int i = 0; i < n; i++)
    {
        // cin.ignore();
        // getline(cin, a[i].name);
        cin >> a[i].name >> a[i].roll >> a[i].marks;
    }
Student min;
    min.marks = INT_MAX;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    // }
    for (int i = 0; i < n; i++)
    {
        if (a[i].marks < min.marks)
        {
            min= a[i];
        }
    }
    cout << min.name << " " << min.roll << " " << min.marks << endl;

    return 0;
}