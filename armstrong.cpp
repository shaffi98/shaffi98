#include<iostream>
using namespace std;
int main()
{
    int i,temp,num,sum=0;
    cout<<"enter the number";
    cin>>num;
    temp=num;
    while(num>0)
    {
        i=num%10;
        sum=sum+i*i*i;
        num=num/10;
    }
    if(sum==temp)
    {
        cout<<"given num is armstrong";
    }
    else
    {
        cout<<"given num is not a armstrong num";
    }
    return 0;
}