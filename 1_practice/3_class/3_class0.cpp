#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    char name[20];
    char phone[10];
    public:
    void getdata()
    {
        cout<<"enter roll no:";
        cin>>roll;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter phone number:";
        cin>>phone;

    }
    void showdata()
    {
        cout<<"name:"<<name<<endl;
        cout<<"roll no:"<<roll<<endl;
        cout<<"phone number:"<<phone<<endl;
    }
};
int main()
{
    student s1,s2;
    s1.getdata();
    s2.getdata();
    cout<<"first student"<<endl;
    s1.showdata();
    cout<<"second student"<<endl;
    s2.showdata();
return 0;
}
