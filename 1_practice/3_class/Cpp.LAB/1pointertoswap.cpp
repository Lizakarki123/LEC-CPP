#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the numbers:"<<endl;
    cin>>x>>y;
     int *num1, *num2,temp;
// declaring pointers
num1=&x;
num2=&y;
// declaring address
 temp=*num1;
//  swap process start
*num1=*num2;
*num2=temp;
cout<<"after swapping:"<<endl;
cout<<"first number="<<x<<endl;
cout<<"second number="<<y<<endl;
return 0;

}