#include <iostream>
using namespace std;
int main(){
    int a[2][2];
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
              cout<<"enter the value of a["<<row<<"]["<<col<<"]= ";
              cin>>a[row][col];
        }
    }
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 2; col++)
        {
              //cout<<"a["<<row<<"]["<<col<<"]= "<<a[row][col];
              cout<<a[row][col]<<"\t";
        }
        cout<<"\n";
    }
}
