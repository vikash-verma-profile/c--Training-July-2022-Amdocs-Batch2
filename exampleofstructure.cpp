#include <iostream>
using namespace std;

struct student{
    string name;
    int rollno;
}s1;
int main(){
   student s2;
   cout<<"enter your name student 1";
   cin>>s1.name;
   cout<<"enter your roll number student 1";
   cin>>s1.rollno;
    cout<<"enter your name student 2";
   cin>>s2.name;
   cout<<"enter your roll number student 2";
   cin>>s2.rollno;
   cout<<"Details of student 1 and student 2";
   cout<<"roll no"<<s1.rollno<<"\n name:"<<s1.name<<endl;
   cout<<"roll no"<<s2.rollno<<"\n name:"<<s2.name;
}
