#include <iostream>
using namespace std;

class Calc
{
private:
    int x, y;

public:
    Calc(int _x = 0, int _y = 0)
    {
        x = _x;
        y = _y;
    }
    Calc operator+(Calc &s1)
    {
        Calc res;
        res.x = x + s1.x;
        res.y = y + s1.y;
        return res;
    }

    void print()
    {
        cout << x << endl
             << y;
    }
};

int main()
{
    Calc c1(10, 5), c2(10, 5);
    Calc c3 = c1 + c2;
    c3.print();
}
