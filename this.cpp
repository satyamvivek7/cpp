#include<iostream>
using namespace std;
class simple
{
    int a,b;
    public:
    simple()
    {
        cout<<"i m default constructor"<<endl;
    }
    simple(int a,int b)
    {
        this->a=a;
        this->b=b;
        cout<<a<<endl<<b<<endl;
    }
    void input(int a,int b)
    {
       this->a=a;
       this->b=b;
    }
    void display()
    {
        cout<<a<<endl<<b;
    }
};
int main()
{
    simple s1;
    simple s2(2,3);
    s1.input(10,20);
    s1.display();
    return 0;
}