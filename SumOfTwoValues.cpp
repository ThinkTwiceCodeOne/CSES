#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x;
cin>>n>>x;
vector<int> v;
for(int i=0;i<n;i++)
{
int num;
cin>>num;
v.push_back(num);
}
map<int,int> m;
int f=0;
for(int i=0;i<n;i++)
{
auto it=m.find(x-v[i]);
if(it!=m.end())
{
cout<<i+1<<" "<<it->second;
f=1;
break;
}
m.insert({v[i],i+1});
}
if(f==0) cout<<"IMPOSSIBLE";
return 0;
}