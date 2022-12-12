#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
vector<pair<long long int,long long int>> adj[n+1];
for(int i=0;i<m;i++)
{
int a,b,w;
cin>>a>>b>>w;
adj[a].push_back({b,w});
}
priority_queue<pair<long long int,long long int>, vector<pair<long long int,long long int>>, greater<pair<long long int,long long int>>> gq;
long long int dist[n+1];
vector<int> vis(n+1,0);
for(int i=2;i<=n;i++) dist[i]=LLONG_MAX;
dist[1]=0;
gq.push({0,1});
while(!gq.empty())
{
int u=gq.top().second;
gq.pop();
if(vis[u]) continue;
vis[u]=1;
for(auto [v,w]:adj[u])
{
if(dist[v]>dist[u]+w)
{
dist[v]=dist[u]+w;
gq.push({dist[v],v});
}
}
}
for(int i=1;i<=n;i++) cout<<dist[i]<<" ";
return 0;
}