//code for amstrong number
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,r,m=0,l,k=0,x;
    
    cout<<"Enter your number:";
    cin>>n;
    r=n;
    while(r!=0)
    {
        r=r/10;
        k++;
    }
    r=n;
    while(n!=0)
    {
        x=n%10;
        m=m+pow(x,k);
        n=n/10;
    }
    if(r==m)
    {
        cout<<m<<" is an Amstrong number";  
    }
    else
    {
        cout<<m<<" is not an Amstrong number";
    }
    
   return 0;
} 