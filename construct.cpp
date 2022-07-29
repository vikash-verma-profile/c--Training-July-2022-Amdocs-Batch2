#include <iostream>
using namespace std;
class Employee
{
public:
    Employee(int a,int b)
    {
        cout<<"Hi i am consytuctor of employee class";
        cout<<a<<b;
    }
    ~Employee(){

    }
};

int main()
{
    Employee e1(1,2);
}
