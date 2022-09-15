#include<iostream>
using namespace std;
class rev
{
     int a;
    public:
   
    rev(int a1)
    {
      a=a1;
       int re=0;
      while(a>0)
      {
         
          re=re*10+a%10;
          a=a/10;
      }
      cout<<"reverse no is ="<<re ;
    }
};
int main()
{
    rev a2(789);
    return 0;
}