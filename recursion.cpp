#include<iostream>
using namespace std;
int re(int r)
{
    if(r<1)
    {
        return 1;
    }
    else
    return r*re(r-1);
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