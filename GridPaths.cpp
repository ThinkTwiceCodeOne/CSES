#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;
int solve(vector<vector<char>>& arr,int i,int j,int n,vector<vector<long long int>> &dp)
{
if(dp[i][j]!=-1) return dp[i][j]%mod;
if(i==n && j==n) return 1;
if(i>n) return 0;
if(j>n) return 0;
if(arr[i][j]=='*') return 0;
return dp[i][j]=(solve(arr,i,j+1,n,dp)%mod+solve(arr,i+1,j,n,dp)%mod)%mod;
}
int main()
{
int n;
cin>>n;
vector<vector<char>> v(n,vector<char>(n));
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
cin>>v[i][j];
}
}
vector<vector<long long int>> dp(n+1,vector<long long int>(n+1,-1));
if(v[n-1][n-1]=='*') cout<<0;
else cout<<solve(v,0,0,n-1,dp);
return 0;
}