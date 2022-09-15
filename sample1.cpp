#include<iostream>
using namespace std;
class sample1
{
  public:
  int a;
  void input()
  {
      a=90;
  }
  void dis(void)
   {
       cout<<"the value s "<<a;
   }
};
int main()
{
    sample1 s1;
    s1.input();
    s1.dis();
    return 0;

}