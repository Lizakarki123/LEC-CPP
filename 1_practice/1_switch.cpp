#include<iostream>
using namespace std;
int main()
{
    int day;
    cout <<"Enter the day:"<<endl;
      cin>>day;
      
     switch(day)
     {
        case 1:
        cout<<"sunday"<<endl;
        break;
        case 2:
        cout<<"monday"<<endl;
        break;
        case 3:
        cout<<"tuesday"<<endl;
        break;
        case 4:
        cout<<"wednesday"<<endl;
        break;
        cout<<"thursday"<<endl;
        break;
        cout<<"friday"<<endl;
        break;
        cout<<"saturday"<<endl;
        break;
        default:
        cout<<"not valid"<<endl;

     } 
}