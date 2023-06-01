#include<iostream>
using namespace std;
 main()
 {
    int i,n,sum;
    float oop[10],math[20],digital[30],edc[40],physics[60];
    float total;
    cout<<"enter the marks of five subjects:"<<endl;
    cout<<"enter the marks of oop:"<<endl;
    for(i=0;i<n;i++)
    cin>>oop[10];
    cout<<"enter the marks of math:"<<endl;
    for(i=0;i<n;i++)
    cin>>math[20];
    cout<<"enter the marks of digital:"<<endl;
    for(i=0;i<n;i++)
    cin>>digital[30];
    cout<<"enter the marks of edc:"<<endl;
    for(i=0;i<n;i++)
    cin>>edc[40];
    cout<<"enter the marks of physics:"<<endl;
    for(i=0;i<n;i++)
    cin>>physics[50];
    cout<<"sum of five subjects:"<<endl;
    for(i=0;i<n;i++)
    cout<<oop[10] + math[20] + digital[30]+edc [40]+physics [50]<<endl;

    return 0;
}