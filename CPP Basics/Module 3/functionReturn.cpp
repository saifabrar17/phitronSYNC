#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int roll;
    int cls;
    double cgpa;
    Student(int roll, int cls, double cgpa)
    {
        this->cgpa = cgpa;
        this->roll = roll;
        this->cls = cls;
    }
};

int main()
{
    Student saif(12, 5, 5.00);

    cout<< saif.cgpa << " " << saif.roll;
    return 0;
}