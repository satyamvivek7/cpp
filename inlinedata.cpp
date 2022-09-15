#include<iostream>
using namespace std;
class sample
{
    static int cnt;
    int id;
    char nm[20];
    public:
    void input()
    {
        cout<<endl<<"enter the id of student=";
        cin>>id;
        cout<<"enter the name of student=";
        cin>>nm;
        cnt++;
    }
    void display()
    {
        cout<<"the id is="<<id<<endl<<"name is="<<nm<<endl;

    }
    void count()
    {
      cout<<"total entery is="<<cnt<<endl;
     }
};
int sample::cnt=0;
int main()
{
    sample s1;
    s1.input();
    s1.display();
    s1.count();
    sample s2;
    s2.input();
    s2.display();
    s2.count();
    sample s3;
    s3.input();
    s3.display();
    s3.count();
    s1.count();
    s2.count();
}