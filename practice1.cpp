//to calculate sum of three numbers and average of them
#include<iostream>
#include<cmath>
using namespace std;
/*int add(int a,int b,int c)
{
    int sum;
    sum=a+b+c;
    return sum;
}
int avg(int x,int y,int z)
{
    int avg;
    avg=(x+y+z)/3;
    return  avg;
}
int main()
{
    int k,l;
    k=add(3,5,7);
    l=avg(3,5,7);
    cout<<"Sum is :"<<k<<"\n"<<"Average is:"<<l;
    return 0;

}*/



int main()
{
    int a,n ,res;
    cout<<"Enter values of a and n";
    cin>>a>>n;

    res=pow(a,n);
    cout<<"Number is:"<<res;
    return 0;

}
