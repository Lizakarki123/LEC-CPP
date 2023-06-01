#include<iostream>
using namespace std;
class complex
{
    private:
    float real;
    float imag;
    public:
    void readvalue()
    {
        cout<<"enter real part:";
        cout<<"enter imaginary part:";

    }
    void showvalue()
    {
        cout<<"("<<real<<","<<imag<<")";

    }
    void add(complex c1,complex c2)
    {
        real=c1.real+c2.real;
        imag=c1.imag+c2.imag;
    }
};
int main()
{
    complex c1,c2,c3;
    cout<<"enter first complex number:"<<endl;
    c1.readvalue();
    cout<<"enter second complex number:"<<endl;
    c2.readvalue();
    c1.showvalue()
    c2.showvalue();
    cout<<"+";
    c3.add(c1,c2);
    cout<<"=";
    c3.showvalue();
    return 0;
}