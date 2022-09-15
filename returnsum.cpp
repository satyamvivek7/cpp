#include<iostream>
using namespace std;
class sample1
{
  public:
  int a,b,c;
  int input(int a1, int b1)
  {
    a=  a1;
    b= b1;
    c=a+b;
    return c;
  }
};
int main()
{
    sample1 s1;
   int c=s1.input(10,20);
    
    cout<<"sum="<<c;
    return 0;

}