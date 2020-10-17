#include<iostream>
using namespace std;
int main()
{
    int n,a;
    int avg;
    int sum=0;
    cout<<"Enter count of  number:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cout<<"Enter numbers"<<i<<":";
        cin>>a;
        sum=sum+a;
        
    }
    avg=sum/n;
    
    cout<<"Average of your numbers is:"<<avg;
    return 0;
}
