#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
vector<int> adj[n+1];
for(int i=0;i<m;i++)
{
int a,b;
cin>>a>>b;
adj[a].push_back(b);
adj[b].push_back(a);
}
queue<int> q;
vector<int> vis(n+1,0);
vector<int> dist(n+1,0);
vector<int> prev(n+1);
q.push(1);
vis[1]=1;
while(!q.empty())
{
int u=q.front();
q.pop();
for(auto it:adj[u])
{
if(vis[it]==0)
{
dist[it]=dist[u]+1;
prev[it]=u;
vis[it]=1;
q.push(it);
}
}
}
if(vis[n]==0) 
{
cout<<"IMPOSSIBLE";
return 0;
}
int K=dist[n];
int u=n;
vector<int> ans(K+1);
for(int i=K;i>=0;i--)
{
ans[i]=u;
u=prev[u];
}
cout<<K+1<<endl;
for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
return 0;
}