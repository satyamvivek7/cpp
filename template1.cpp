#include<iostream>
#include<stdlib.h>
using namespace std;
template<class T>
void swap( T &a, T &b)
{
    T t;
    t=a;
    a=b;
    b=t;
}
int main()
{
    int p,q;
    cout<<"enter two int=";
    cin>>p>>q;
    ::swap(p,q);
    cout<<p<<"\t"<<q<<endl;
    char s,t;
    cout<<"enter two char=";
    cin>>s>>t;
    ::swap(s,t);
    cout<<s<<"\t"<<t<<endl;
   
    return 0;
}