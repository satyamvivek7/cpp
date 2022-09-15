#include<iostream>
using namespace std;
class abc
{
    int a[5],b[5],c[5];
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
    abc(int b1,int b2,int b3,int b4,int b5)
    {
     for(int i=0;i<5;i++)
      {
          b[0]=b1;
          b[1]=b2;
          b[2]=b3;
          b[3]=b4;
          b[4]=b5;
      }
      cout<<endl;          
    }
    abc (abc &a4,abc &a5)
    {
     for(int i=0;i<5;i++)
      {
        c[i]=0;
      c[i]=a4.a[i]+a5.b[i];
      cout<<c[i]<<"\t";
      }
    }
};
int main()
{
    int b1[5];
    abc a1;
    abc a2(1,2,3,4,5);
    abc a3(a1,a2);
    return 0;
}