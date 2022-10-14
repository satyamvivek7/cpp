#include<iostream>
using namespace std;
int main()
{
   int a,b,lcm;
   cout<<"enter two no=";
   cin>>a>>b;
   lcm=a;
   while(1)
   {
     if(lcm%a==0 && lcm%b==0)
       {
         break;
        }
       lcm++;
   }                 
  
   cout<<lcm;
   return 0;
}