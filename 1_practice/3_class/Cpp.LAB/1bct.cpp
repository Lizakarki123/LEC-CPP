#include<iostream>
namespace BEI{
char Hod[20]="ram upreti";
int room=300;
void printhod(){
    std::cout<<"hod:";

}
void printroom()
{
std::cout<<"room:";

}
}
namespace BCT{
    char Hod[20]="prachesacharya";
    int labroom=400;
    void printhod()
    {
        std::cout<<"hod";       
    }
    void printlabroom()
    {
        std::cout<<"room:";
    }
}
int main ()
{
    using namespace BEI;
    using namespace BCT;
    printroom();
    printlabroom();
    printhod();
    printhod();
    return 0;
}