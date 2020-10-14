#include<iostream>
using namespace std;
int main()
{
    int a,b,q,r;
    cout<<"Enter the numbers:";
    cin>>a>>b;
    if(a>b && b!=0)
    {
       q=a/b;
       r=a%b;
    cout<<"Quotient is:"<<q<<"Remainder is:"<<r;
    }
    else
    {
        cout<<"Your input is invalid";
    }
    return 0;
 }
    