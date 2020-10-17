#include<iostream>
using namespace std;
int main()
{
    int n;
    int avg;
    cout<<"Enter count of  number:";
    for (int j;j!=0;j++)
    {
            cin>>n;
    }
   
    for(int i=0;i<n;i++)
    {
        avg=(i+n)/n;
        
    }
    cout<<"Average of your numbers is:"<<avg;
    return 0;
}
