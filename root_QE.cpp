#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int a;
    int b;
    int c;
    int r1,r2,d,real,imag;
    cout<<"Enter values of a,b,c:";
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d>0)
    {
        cout<<"Roots of quadratice equation are:";
        r1=-b+sqrt(d)/(2*a);
        r2=-b-sqrt(d)/(2*a);
        cout<<"\nTwo real and distinct roots";
        cout<<r1<<"\n"<<r2;

    }
    else if(d==0)
    {
        r1=r2=-b/(2*a);
        cout<<"\n two real and equal roots are:";
        cout<<r1<<"\n"<<r2;
    }
    else
    {
        real=-b/(2*a);
        imag=sqrt(-d)/(2*a);
        cout<<"\n Roots are complex and imaginary";
        cout<<real<<"+"<<"i"<<imag;
    }
    

    return 0;
}