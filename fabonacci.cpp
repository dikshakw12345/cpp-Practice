#include<iostream>
using namespace std;
int main()
{
    int n;
    int a=0,b=1,c;
    cout<<"Enter number upto which you have series:";
    cin>>n;
    cout<<"Fabonacci series is:"<<a<<" "<<b;
    for(int i=2;i<n;i++)
    {
       c=a+b;
       cout<<" "<<c;
       a=b;b=c;
    }

    
    return 0;
}