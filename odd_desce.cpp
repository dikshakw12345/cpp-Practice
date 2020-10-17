#include<iostream>
using namespace std;
int main()
{
    int n,a;
    cout<<"Enter count of number :";
    cin>>n;
    cout<<"Descending order of odd numbers:";
    for (int i=n-1;i>=0;i--)
    {
        a=1+i*2;
        cout<<a<<" ";
    }
    return 0;
}