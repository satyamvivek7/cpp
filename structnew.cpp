#include<iostream>
using namespace std;
struct stud
{
    char *nm;
    int age;
};
int main()
{
    stud *p;
    p= new stud[2];
    p->nm="satyam";
    p->age=20;
    (p+1)->nm="shubham";
    (p+1)->age=21;
    for(int i=0;i<2;i++)
    {
        cout<<"name="<<(p+i)->nm<<endl<<"age="<<(p+i)->age<<endl;
    }
    delete []p;
    return (0);
}