#include<iostream>
using namespace std;
int main()
{
    int n,sum_e=0,sum_o=0;
    cout<<"Enter natural numbers count:";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(i%2==0)
        {
           sum_e=sum_e+i;
        }
        else
        {
            sum_o=sum_o+i;
        }
        
        
    }
   
        cout<<"\n Sum of even is "<<sum_e;
    
        cout<<"\n Sum of odd is "<<sum_o;
    
    
    return 0;
}