#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int c;
    c=a;
    a=b;
    b=c;
    cout<<"Inside function"<<"a="<<a<<"b="<<b<<endl;
}

int main()
{
   int a=1,b=2;
   cout<<"before calling swap a="<<a<<"b="<<b<<endl;
   swap(a,b);
   cout<<"after calling swap a="<<a<<"b="<<b<<endl;
}
