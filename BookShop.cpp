#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,budget;
cin>>n>>budget;
vector<int> book(n),page(n);
for(int i=0;i<n;i++)
{
cin>>book[i];
}
for(int i=0;i<n;i++)
{
cin>>page[i];
}
vector<vector<int>> dp(n+1,vector<int>(budget+1,0));
for(int i=1;i<=n;i++)
{
for(int j=0;j<=budget;j++)
{
dp[i][j]=dp[i-1][j];
if(j>=book[i-1])
{
dp[i][j]=max(dp[i][j],dp[i-1][j-book[i-1]]+page[i-1]);
}
}
}
cout<<dp[n][budget];
return 0;
}