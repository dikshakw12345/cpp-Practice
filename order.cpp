//converting number to ascending order
#include<iostream>
using namespace std;
int main()
{
   int a,b,c;
   cout<<"Enter numbers:";
   cin>>a>>b>>c;
   if(a>b && a>c)
       {
           cout<<c<<" "<<b<<" "<<a;
       }       
   else if(b>a && b>c) 
      {
            cout<<c<<" "<<" "<<a<<" "<<b;
      } 
   else
      {
          cout<<a<<" "<<" "<<b<<" "<<c;
      }   
   return 0;
}          