#include<iostream>
using namespace std;
class second;
class first
{
private:
int a;
public:
void input()
{
    cout<<"enter a no="<<endl;
    cin>>a;
}
friend int sum(first,second);
};
class second
{
private:
int b;
public:
void input()
{
    cout<<"enter a no="<<endl;
    cin>>b;
}
friend int sum(first,second);
};
int sum(first f1,second s1)
{
    int s=f1.a+s1.b;
    cout<<"sum of no="<<s;
}
int main()
{
    first f1;
    second s1;
    f1.input();
    s1.input();
    sum(f1,s1);
    return 0;
}