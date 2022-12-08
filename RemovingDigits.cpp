#include<bits/stdc++.h>
using namespace std;
int solve(int n,vector<int>& dp)
{
if(dp[n]!=-1) return dp[n];
if(n<0) return 0;
if(n==0) return 0;
int ans=INT_MAX;
string s=to_string(n);
for(int i=0;i<s.size();i++)
{
int d=s[i]-'0';
if(d!=0) ans=min(ans,1+solve(n-d,dp));
}
return dp[n]=ans;
}
int main()
{
int n;
cin>>n;
vector<int> dp(n+1,-1);
cout<<solve(n,dp);
return 0;

}