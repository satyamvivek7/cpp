#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    a.push_back(24);
    a.push_back(26);
    a.push_back(27);
    a.push_back(20);
    a.push_back(24);
    a.push_back(12);

    int b=a.size();
    cout<<b<<endl<<a.capacity()<<endl;
    cout<<"before pop "<<endl;
    for(int i=0;i<b;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    a.pop_back();
     cout<<"after pop "<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    a.clear();
    cout<<a.size();
    return 0;
}