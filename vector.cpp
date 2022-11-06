#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
  vector<int> p;
  p.push_back(2);  
  p.push_back(1);
  p.push_back(5);
  p.push_back(7);
  p.push_back(9);
    for(auto m:p) 
    {
     cout<<m<<" ";              
    }  
    cout<<endl;
    p.erase(p.begin(),p.begin()+3);
    p.insert(p.begin()+1,56);
   for(auto s:p) 
    {
     cout<<s<<" ";              
    } 
   return 0;           
}