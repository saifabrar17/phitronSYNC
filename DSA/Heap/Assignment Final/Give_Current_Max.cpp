#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class compere
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks > b.marks)
            return false; 
        else if (a.marks < b.marks)
            return true;
        else
        {
            if (a.roll < b.roll)
                return false;
            else
                return true;
        }
    }
};
int main()
{

    int n;
    cin >> n;
    priority_queue<Student, vector<Student>, compere> pq;
    while (n--)
    {
        string s;
        cin >> s;
        int r, m;
        cin >> r >> m;
        Student ob(s, r, m);
        pq.push(ob);
    }
   long long q;
    cin >> q;
    while (q--)
    {
       long long x;
        cin >> x;
        if (x == 0)
        {
            string s;
            cin >> s;
            int r, m;
            cin >> r >> m;
            Student ob(s, r, m);
            pq.push(ob);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (x == 1)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        }
        else if (x == 2)
        {
            if (pq.empty())
                cout << "Empty" << endl;
            else
            {
                pq.pop();
                if (pq.empty())
                    cout << "Empty" << endl;
                else
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            }
        }
    }
    return 0;
}