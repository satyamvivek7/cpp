#include<iostream>
#include<array>
using namespace std;
int main()
{
    //int b[4]={1,2,3,4};
    array<int,4> a={1,2,3,4};
    int size=a.size();
    cout<<size<<endl<<"satyam"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"at pos 2="<<a.at(2)<<endl;
    cout<<"empty or not="<<a.empty()<<endl;
    cout<<a.front()<<endl<<a.back();
    return 0;
}
