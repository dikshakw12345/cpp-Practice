#include<iostream>
using namespace std;
int main()
{
    int n,m,rev=0,r;
    cout<<"Enter a number:";
    cin>>n;
    m=n;
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(m==rev)
    {
        cout<<"It is a palindrome";
    }
    else
    {
        cout<<"It is not a palindrome";
    }
    return 0;
}