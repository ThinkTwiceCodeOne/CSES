#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
int n;
cin>>n;
vector<pair<int,int> > v;
for(int i=0;i<n;i++)
{
int a,b;
cin>>a>>b;
pair<int,int> p;
p.first=a;
p.second=1;
v.push_back(p);
p.first=b;
p.second=-1;
v.push_back(p);
}
sort(v.begin(),v.end());
int count=0;
int ans=0;
for(int i=0;i<v.size();i++)
{
count+=v[i].second;
ans=max(ans,count);
}
cout<<ans<<endl;
return 0;
}
