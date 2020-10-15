//C++ Program to Check Whether a character is Vowel or Consonant.
#include<iostream>
using namespace std;
int main()
{
   char ch;
   char low,high;
   cout<<"Enter alphabate:";
   cin>>ch;
   low=(ch== 'a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u');
   high=(ch== 'A' || ch== 'E' || ch== 'I' || ch== 'O' || ch== 'U');
   if(low || high)
   { 
       cout<<"It is vowel";
      
   }
   else
   {
       cout<<"Constant";
   }
   return 0;
   
}