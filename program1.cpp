#include<iostream.h>
using namespace std;
class student
{
    private:
    char[5],roll no[5],age[5],assignment[5];
    public:
    void input();
    void display();

void student::input()
{
    cout<<"enter name:";
    cin>>name;
    cout<<"enter roll no:";
    cin>>roll no;
    cout<<"enter age:";
    cin>>age;
    cout<<"enter assignment:";
    cin>>assignment;
}
void student::display()
{
    cout<<"/n name:"<<name;
    cout<<"/n roll no:"<<roll no;
    cout<<"/n age:"<<age;
    cout<<"/n assignment:"<<assignment;
}
};
int main()
{
    student s;
    s.input();
    s.display();
}
