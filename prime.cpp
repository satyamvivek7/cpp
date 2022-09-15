#include<iostream>
using namespace std;
int main()
{
    int a,b,i=2,c=0;
    cout<<"enter the range=";
    cin>>a>>b;
    while(a<=b)
    {
        if(a%i==0)
        {
          cout<<a<<"\t";
        }
        i++;
        a++;
    }
    return 0;
}