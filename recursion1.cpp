#include<iostream>
using namespace std;
int re(int r)
{
    if(r!=0)
    {
         
         return r+re(r-1);
    }
    else
    return 0;
   ;
}
int main()
{
int m;
cout<<"enter a no=";
cin>>m;
int s=re(m);
cout<<s;
return 0;
}

