#include<iostream>
using namespace std;
class satyam
{
   int a;
    public:
    void input()
    {
        cout<<"enter a no="<<endl;
        cin>>a;
    }
    void operator++()
    {
        a++;
        cout<<a;
    }
};
int main()
{
    satyam s1,s2;
    s1.input();
   ++s1;
    return 0;
}