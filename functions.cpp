#include <iostream>
using namespace std;
int sum(int a,int b);
int main(){
 int a,b;
 cout<<"Please enter the value of a and b";
 cin>>a>>b;
 int suma=sum(a,b);
 cout<<"Sum of two numbers is :"<<suma;
}
int sum(int a,int b){
    return (a+b);
}
