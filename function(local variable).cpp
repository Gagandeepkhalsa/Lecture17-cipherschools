#include<iostream>
using namespace std;
void PrintHi()
{
    cout<<"Hi"<<endl;
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    a=500;
    cout<<"The value of c "<<c<<endl;
    return c;

}
int main()
{
    PrintHi();
    int a,b,c;
    a=4;
    b=6;
    c=75
    int d;
    d=sum(a,b);
    cout<<"The value of c "<<c<<endl;
    return 0;
}