#include<iostream>
using namespace std;
int main()
{
    int n,r,m;
    cout<<"Enter number:";
    cin>>n;
    m=n;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
    }
    if(m==n)
    {
        cout<<"It is palindrome";
    }
    else
    {
          cout<<"It is not  palindrome";
    }
    return 0;    

}