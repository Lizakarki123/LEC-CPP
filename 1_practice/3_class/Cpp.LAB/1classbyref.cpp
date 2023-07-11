#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a,b;
    cout<<"enter the value of a:";
    cin>>a;
    cout<<"enter the value of b:";
    cin>>b;
    cout<<"before swapping:"<<endl;
    cout<<"a="<<a<<" and b="<<b<<endl;
    swap(a,b);
    cout<<"after swapping:"<<endl;
    cout<<"a="<<a<<" and b="<<b<<endl;
}