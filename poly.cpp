#include <iostream>
using namespace std;

class Sample
{
public:
    void func(int x)
    {
        cout << "value of x in int is:- " << x << endl;
    }
    void func(double x)
    {
        cout << "value of x in double is:- " << x << endl;
    }
    void func(int x, int y)
    {
        cout << "value of x and y  is:- " << x << " y=" << y << endl;
    }
};

int main()
{
    Sample s;
    s.func(1);
    s.func(1.00);
    s.func(1, 2);
}
