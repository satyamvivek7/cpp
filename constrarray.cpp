#include<iostream>
using namespace std;
class abc
{
    int a[5],c[5],b[5];
    public:
    abc()
    {
      cout<<"enter 5 element of array"<<endl;
      for(int i=0;i<5;i++)
      {
          cin>>a[i];
      }
      for(int i=0;i<5;i++)
      {
          cout<<a[i]<<"\t";
      }
      cout<<endl;
    }
    abc(int b2[])
    {
     
     for(int i=0;i<5;i++)
      {
          a[i]=b2[i];
          cout<<a[i]<<"\t";
      }
      cout<<endl;
    }
    abc (abc &a4,abc &a5)
    {
     for(int i=0;i<5;i++)
      {
      c[i]=a4.a[i]+a5.b[i];
      cout<<c[i]<<"\t";
      }
    }
};
int main()
{
    int b1[5];
    abc a1;
    cout<<"enter 5 element of parametrise const"<<endl;
     for(int i=0;i<5;i++)
      {
          cin>>b1[i];  
      }
      abc a2(b1);
      abc a3(a1,a2);
   
    return 0;
}