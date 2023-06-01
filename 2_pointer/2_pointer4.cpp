#include<iostream>
using namespace std;
 class student{
    public:
    double marks;

    student(double n){
        marks = n;

    }
 };
 void calculateAverage(student s1, student s2);{
 double average = (s1.marks + s2.marks);
 cout<<"The Average marks of two students is"<<average<<endl;
}
int main(){
    student student(100.0);
}

