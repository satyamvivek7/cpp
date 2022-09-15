#include<iostream>
using namespace std;
int main()
{
    int a,b,c=0;
    cout<<"enter range=";
    cin>>a>>b;
    if(a<=2)
    {
        cout<<"2"<<"\t";
    }
    for(int i=2;i<=b;i++)
     {
       for(int j=2;j<a;j++)
       {
        if(a%j==0)
        {
            c++;
        }
        a++;
       }
       if(c==1)
       {
        cout<<a<<"\t";
       }
     }
    return 0;
}