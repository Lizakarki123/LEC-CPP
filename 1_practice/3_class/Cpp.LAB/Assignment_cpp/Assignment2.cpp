

#include<iostream>
#include<string.h>
using namespace std;
 
class student
{
    int rollno;
    char name[50];
    double fee;
 
      public:
    student(int,char[],double);
    void display();
     
};
 
student::student(int no,char n[],double f)
{
    rollno=no;
    strcpy(name,n);
    fee=f;
}   
 
void student::display()
{
    cout<<endl<<rollno<<"\t"<<name<<"\t"<<fee;
}
     
int main()
{
    student s(18,"liza",20000);
    s.display();
    return 0;
}