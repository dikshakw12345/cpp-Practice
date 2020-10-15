//C++ Program to convert given inches into equivalent yard,feet and inches
#include<iostream>
using namespace std;
int main()
{   int inch;
    int foot;
    int yard;
    cout<<"\nEnter values in inches:";
    cin>>inch;
    foot=12*inch;
    yard=36*inch;
    cout<<"\n Converter for inches to foot an d yard is:"<<"\n foot:"<<foot<<"\n"<<"\n yard:"<<yard;
}