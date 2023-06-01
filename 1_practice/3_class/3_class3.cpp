#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    char name[20];
    char phone[10];
public:
void getdata();
void showdata();
};
inline void student::getdata()
{
    cout<<"enter roll no:";
    cin>>roll;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter phone number:";
    cin>>phone;


}
inline void student ::showdata()
{
    cout<<"name:"<<name<<endl;
    cout<<"roll no:"<<roll<<endl;
    cout<<"phone number:<<phone<<endl;"
}