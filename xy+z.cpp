#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"X"<<"\t"<<"Y"<<"\t"<<"Z"<<"\t"<<"X*Y+Z";
    for(int a=0;a<=1;a++)
    {
        for(int b=0;b<=1;b++)
        {
            for(int c=0;c<=1;c++)
            {
                if(a*b+c==2)
                 {
                     cout<<"\n"<<a<<"\t"<<b<<"\t"<<c;
                 }    
                else
                {
                    cout<<"\n"<<a<<"\t"<<b<<"\t"<<c<<"\t"<<a*b+c; 
                }
                 
            }
        }
    }
    return 0;
}