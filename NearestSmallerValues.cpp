#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
vector<int> v(t);
for(int i=0;i<t;i++) cin>>v[i];
stack<pair<int,int>> s;
s.push(make_pair(v[0],1));
cout<<0<<" ";
for(int i=1;i<t;i++)
{
while(!s.empty() && s.top().first>=v[i])
{
s.pop();
}
if(s.empty()==true) cout<<0<<" ";
else cout<<s.top().second<<" ";
s.push(make_pair(v[i],i+1));
}
return 0;
}