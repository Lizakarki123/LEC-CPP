#include<iostream>
using namespace std;
class Room{
    public:
    int length;
    int breadth;
    int height;
    void info()
    {
        cout<<"Enter length";
        cin>>length;
        cout<<"Enter breadth";
        cin>>breadth;
        cout<<"Enter height";
        cin>>height;

    }
    void calculateArea()
    {
        cout<<"The area of the room is :"<<length*breadth<<endl;
    }
    void calculateVolume()
    {
        cout<<"The volume of the room is :"<<length*breadth*height<<endl;
    }
};
int main()
{
       Room obj401;
    obj401.calculateArea();
    obj401.calculateVolume();
    }
    
