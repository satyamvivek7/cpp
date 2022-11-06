#include<bits/stdc++.h>
using namespace std;
int main()
{
   pair<int,int> p={1,3};
   cout<<p.first<<" "<<p.second<<endl;
    pair<int, pair<int,int>> q={2,{5,6}};
    cout<<q.first<<" "<<q.second.first<<q.second.second<<endl ; 
    pair<int,int> r[]={{1,2},{3,4},{6,7},{9,10}};
    cout<<r[3].first ;            
}