#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;
int solve(int s,int dp[])
{
	if(s==0) return 1;
	if(dp[s]!=-1) return dp[s];
	int cnt=0;
	for(int i=1;i<=6;i++)
	{
		if(s-i>=0) cnt=(cnt%mod+solve(s-i,dp)%mod)%mod;
	}
	return dp[s]=cnt%mod;
}	
int main()
{
	int n;
	cin>>n;
	int dp[n+1];
	memset(dp,-1,sizeof(dp));
	cout<<solve(n,dp);
	return 0;
}