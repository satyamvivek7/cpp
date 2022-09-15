#include<iostream>
using namespace std;
int main()
{
    int *a,*b,sum;
    char c;
    satyam:
    a=new int;
    b=new int;
    cout<<"enter the two no"<<endl;
    cin>>*a>>*b;
    sum=*a+*b;
    cout<<"sum of both no is ="<<sum<<endl;
    cout<<"you want to add again new no(y/n)"<<endl;
    cin>>c;
    if(c=='y')
    {
    goto satyam;
    }
    else
    {
        exit (0);
    }
    delete a;
    delete b;
    return 0;
}