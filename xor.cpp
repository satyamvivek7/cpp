#include <iostream>
using namespace std;
int main()
{
int n=5;
int start=0;
int res=start;
for(int i=1; i<n; i++)
{
    res=res^(start+2*i);              
}
cout<<res<<endl;
return 0;
}