#include <iostream>
using namespace std;

struct student
{
    string name;
    int rollno;
    student getData(student s2)
    {
        cout << "enter your name student :";
        cin >> s2.name;
        fflush(stdin);
        cout << "enter your roll number student :";
        cin >> s2.rollno;
        return s2;
    }
    void showData(student);
};

void student::showData(student s2)
{
    cout << "Details of student 1 and student 2";
    cout << "roll no" << s2.rollno << "\n name:" << s2.name << endl;
}
int main()
{
    student s2;
    s2=s2.getData(s2);
    s2.showData(s2);
}
