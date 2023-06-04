#include<iostream>
using namespace std;
class friends{
private:

char address[10];
int phone;
public:
friends()
{
    cout<<"their address is:"<<endl;
    cin>>address;
    cout<<"their phonenumber is:"<<endl;
    cin>>phone;
    }
void info()
{
    cout<<"address:"<<address<<endl;
    cout<<"phonenumber:"<<phone<<endl;
}
};
int main()
{
friends rita,sita,tina;
cout<<"rita:"<<endl;
rita.info();

cout<<"sita:"<<endl;
sita.info();

cout<<"tina:"<<endl;
tina.info();

}





