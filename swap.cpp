//swaping two numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter value for a:";
    cin>>a;
    cout<<"Enter value for b:";
    cin>>b;
    cout<<"\n Before swapping :"<<"\n a="<<a<<"\n b="<<b;
    temp=a;
    a=b;
    b=temp;
    cout<<"\n After swapping:"<<"\n a="<<a<<"\n b="<<b;
    return 0;
}