#include<iostream>
using namespace std;
class abc
{
    int n,a[5],b[5],c[5];
    public:
    abc()
    {
      cout<<"enter 5 element of array"<<endl;
      for(int i=1;i<=5;i++)
      {
          cin>>a[i];
      }
      for(int i=1;i<=5;i++)
      {
          cout<<a[i]<<"\t";
      }
      cout<<endl;
    }
    abc(int b2)
    {
     
     for(int i=1;i<=5;i++)
      {
          b[i]=b2;
          cout<<b[i]<<"\t";
      }
      cout<<endl;
    }
    abc (abc &a4)
    {
     for(int i=1;i<=5;i++)
      {
    a4.c[i]=a4.a[i]+a4.b[i];
      cout<<a4.c[i]<<"\t";
      }
    }
};
int main()
{
    int b1[5];
    abc a1;
    abc a2(1,2,3,4,5);
    abc a3(a1);
    return 0;
}