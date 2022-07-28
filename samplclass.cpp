#include <iostream>
using namespace std;
class student
{

    string name;
    int rollno;

public:
    void getdata()
    {
        cout << "enter name";
        cin >> name;
        fflush(stdin);
        cout << "enter student rollno";
        cin >> rollno;
    }
    void print()
    {
        cout << "Student Name: " << name << endl
             << "Student Roll_no: " << rollno;
    }
};
int main()
{

    student s;
    s.getdata();
    s.print();
}
