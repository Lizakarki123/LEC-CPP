#include<iostream>
using namespace std;
class A{
 public:
 int data;
  
  void getdata()
  {
    cout<<"enter the valiue of data";
    cin>>data;
  }  
void showdata()
{
    cout<<"the value of data is "<<data;
}
};
class B

    public:
    class A a;
    int b;
    void getdata()
{
   A.getdata();
    cout<<"Enter the value of b:";
    cin>>b;

}
void showdata()
{

    A.showdata();
    cout<<" the value of b is:";
};
int main()
{
 class B b;
b.getdata();
b.showdata();
return 0;
}
    

 
 
