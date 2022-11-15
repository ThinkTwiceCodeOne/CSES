#include<bits/stdc++.h>
using namespace std;
bool solve(pair<int,int> a,pair<int,int> b)
{
return a.second<b.second;
}
int main()
{
int n;
cin>>n;
vector<pair<int,int>> v;
for(int i=0;i<n;i++)
{
int a,b;
cin>>a>>b;
pair<int,int> p;
p.first=a;
p.second=b;
v.push_back(p);
}
sort(v.begin(),v.end(),solve);
int count=1;
int final=v[0].second;
for(int i=1;i<n;i++)
{
if(v[i].first>=final)
{
final=v[i].second;
count++;
}
}
cout<<count;
return 0;
}