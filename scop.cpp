#include<iostream>
using namespace std;
class first
{
private:
int a;
public:
void input();
};
void first::  input()
{
    cout<<"enter a no="<<endl;
    cin>>a;
}
int main()
{
    first f1;
    f1.input();
    return 0;
}