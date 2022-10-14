#include<iostream>
using namespace std;
int main()
{
    int a,i=2,c=0;
    cout<<"enter the no=";
    cin>>a;
    while(i<=a)
    {
        if(a%i==0)
        {
          c++;
          i++;
          
        } 
        break;
    }
    if(c==0)
    cout<<"no is  prime";
    else 
    cout<<"no is not prime";
    return 0;
}