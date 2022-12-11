#include<bits/stdc++.h>
using namespace std;
void DFS(vector<int> adj[],int node,vector<int>& vis)
{
vis[node]=1;
for(auto it:adj[node])
{
if(vis[it]==0) DFS(adj,it,vis);
}
}
int main()
{
int n,r;
cin>>n>>r;
vector<int> v[n+1];
vector<int> vis(n+1,0);
for(int i=0;i<r;i++)
{
int a,b;
cin>>a>>b;
v[a].push_back(b);
v[b].push_back(a);
}
vector<int> res;
for(int i=1;i<=n;i++)
{
if(vis[i]==0)
{
res.push_back(i);
DFS(v,i,vis);
}
}
cout<<res.size()-1<<endl;
for(int i=0;i<res.size()-1;i++)
{
cout<<res[i]<<" "<<res[i+1]<<endl;
}
cout<<endl;
return 0;
}