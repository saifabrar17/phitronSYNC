#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int id;
    string name;
    string section;
    double totalMarks;

    Student(int id, const string &name, const string &section, double totalMarks)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->totalMarks = totalMarks;
    }
};

int main()
{
    int n;
    cin >> n;

    // Dynamic allocation of an array of pointers to Student objects
    Student **students = new Student *[n];

    for (int i = 0; i < n; ++i)
    {
        int id;
        string name, section;
        double totalMarks;

        // cout << "Enter details for student " << i + 1 << ":" << endl;

        // cout << "Enter ID: ";
        cin >> id;

        cin.ignore(); // Ignore newline character left in the buffer

        // cout << "Enter name: ";
        getline(cin, name);

        // cout << "Enter section: ";
        getline(cin, section);

        // cout << "Enter total marks: ";
        cin >> totalMarks;

        // Create a new Student object dynamically and store its pointer in the array
        students[i] = new Student(id, name, section, totalMarks);
    }

    // Find the student with the highest total marks
    int highestIndex = 0;
    for (int i = 1; i < n; ++i)
    {
        if (students[i]->totalMarks > students[highestIndex]->totalMarks ||
            (students[i]->totalMarks == students[highestIndex]->totalMarks &&
             students[i]->id < students[highestIndex]->id))
        {
            highestIndex = i;
        }
    }

    // Print details for the student with the highest total marks
    // cout << "Details for the student with the highest total marks:" << endl;
    cout << "ID: " << students[highestIndex]->id << ", Name: " << students[highestIndex]->name << ", Section: " << students[highestIndex]->section << ", Total Marks: " << students[highestIndex]->totalMarks << endl;

    // Print details for all students
    // cout << "Details for all students:" << endl;
    // for (int i = 0; i < n; ++i)
    // {
    //     cout << "ID: " << students[i]->id << ", Name: " << students[i]->name << ", Section: " << students[i]->section << ", Total Marks: " << students[i]->totalMarks << endl;

    //     // Don't forget to free the allocated memory for each Student object
    //     delete students[i];
    // }

    // Don't forget to free the memory allocated for the array of pointers
    delete[] students;

    return 0;
}
