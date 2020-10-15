#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter alphabate:";
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<"You entered lowercase alphabate is";
        ch=ch-32;
        cout<<"Your uppercase alphabate is:"<<ch;
    }
   else
   {
       cout<<"You entered uppercase alphabate";
       ch=ch+32;
       cout<<"Your lowercase alphabate is:"<<ch;
   }
   return 0;
}
