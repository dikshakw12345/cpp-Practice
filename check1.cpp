#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter your character :";
    cin>>ch;
     if(ch>64 && ch<91)
     { 
          cout<<ch<<"is uppercase alphabate";
     }
     else if(ch>96 && ch<123)
     {
         cout<<ch<<"is lowercase alphabate";
     }                                           
     else if(ch>47 && ch<58)
     {
         cout<<ch<<" is digit";
     } 
     else                       
      {
          cout<<"It is special character";                      
      } 
    
    return 0;
}