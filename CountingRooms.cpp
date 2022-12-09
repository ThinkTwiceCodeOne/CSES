#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<char>>& adj,int i,int j,vector<vector<int>>& vis,int r,int c)
{
int deltaX[4]={0,0,-1,1};
int deltaY[4]={1,-1,0,0};
vis[i][j]=1;
for(int k=0;k<4;k++)
{
int newX=i+deltaX[k];
int newY=j+deltaY[k];
if(newX>=0 && newY>=0 && newX<r && newY<c && 
vis[newX][newY]==0 && adj[newX][newY]=='.') dfs(adj,newX,newY,vis,r,c);
}
}
int main()
{
int r,c;
cin>>r>>c;
vector<vector<char>> adj(r,vector<char>(c));
vector<vector<int>> vis(r,vector<int>(c,0));
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
cin>>adj[i][j];
}
}
int ans=0;
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
if(vis[i][j]==0 && adj[i][j]=='.')
{
dfs(adj,i,j,vis,r,c);
ans++;
}
}
}
cout<<ans;
return 0;
}