#include <iostream>

using namespace std;

struct Student
{
    int id;
    string name;
    char section;
    int total_marks;
};

int main()
{
    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        Student students[3];

        for (int i = 0; i < 3; ++i)
        {
            cin >> students[i].id >> students[i].name >> students[i].section >> students[i].total_marks;
        }

        int highest_mark = -1;
        int highest_id = -1;

        for (int i = 0; i < 3; ++i)
        {
            if (students[i].total_marks > highest_mark || (students[i].total_marks == highest_mark && students[i].id < highest_id))
            {
                highest_mark = students[i].total_marks;
                highest_id = students[i].id;
            }
        }

        cout << highest_id << " " << students[highest_id - 1].name << " " << students[highest_id - 1].section << " " << highest_mark << endl;
    }

    return 0;
}