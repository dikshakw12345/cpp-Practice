#include<iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"Enter year:";
    cin>>yr;
    if(yr%4==0 || yr%400==0 || yr%100==0)
    {
        cout<<yr<<" is a leap year";

    }
    else
    {
         cout<<"Not leap year";
    }
    return 0;
}