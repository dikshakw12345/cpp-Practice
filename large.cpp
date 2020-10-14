#include<iostream>
using namespace std;
int main()
{
    int n,x;
    int l=0;
    cout<<"Enter count of number:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter number:";
        cin>>x;
        if(x>l)
        {
            l=x;
            
        }
        cout<<"Largest is:"<<l;
      
        
    }
    return 0;
}