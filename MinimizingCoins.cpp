#include<bits/stdc++.h>
using namespace std;
int solve(vector<int>& v,int target,int n,vector<vector<int>>& dp)
{
if(n==0)
{
if(target%v[0]==0) return target/v[0];
return 1e9;
}
if(dp[n][target]!=-1) return dp[n][target];
int notTake=0+solve(v,target,n-1,dp);
int take=INT_MAX;
if(v[n]<=target) 
{
take=1+solve(v,target-v[n],n,dp);
}
return dp[n][target]=min(take,notTake);
}
int main()
{
int n,t;
cin>>n>>t;
vector<int> v;
vector<vector<int>> dp(n,vector<int> (t+1,-1));
for(int i=0;i<n;i++)
{
int num;
cin>>num;
v.push_back(num);
}
sort(v.begin(),v.end());
for(int T=0;T<=t;T++)
{
if(T%v[0]==0) dp[0][T]=T/v[0];
else dp[0][T]=1e9;
}
for(int i=1;i<n;i++)
{
for(int T=0;T<=t;T++)
{
int notTake=0+dp[i-1][T];
int take=INT_MAX;
if(v[i]<=T)
{
take=1+dp[i][T-v[i]];
}
dp[i][T]=min(take,notTake);
}
}
int ans=dp[n-1][t];
if(ans>=1e9) cout<<-1<<endl;
else cout<<ans<<endl;
return 0;
}