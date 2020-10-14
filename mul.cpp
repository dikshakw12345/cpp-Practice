#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number :";
    cin>>n;
    int sum=0;
      cout<<"Multiplication table of "<<n<<" is ";

    for(int i=1;i<=10;i++)
    {
        sum=n*i;
        cout<<"\n"<<sum;
        
    }
  return 0;
} 