#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++) cin>>v[i];
vector<int> idx(n+1,0);
for(int i=0;i<n;i++)
{
idx[v[i]]=i;
}
int count=1;
for(int i=1;i<=n;i++)
{
if(idx[i]>=idx[i-1]) continue;
else count++;
}
cout<<count<<endl;
return 0;
}
