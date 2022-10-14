#include<iostream>
using namespace std;
int main()
{
   int  a,b,hcf;
   cout<<"enter two no=";
   cin>>a>>b;
   hcf=a;
   while(1)
   {
      if(a%hcf==0 && b%hcf==0)
      {
                    break;
      }              
      hcf--;
   }  
   cout<<"hcf = "<<hcf<<endl;             
}