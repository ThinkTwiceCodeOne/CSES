#include<bits/stdc++.h>
using namespace std;
int main()
{
int mod=1000000007;
int n,target;
cin>>n>>target;
vector<int> v;
vector<long long int> dp(target+1,0);
for(int i=0;i<n;i++)
{
int num;
cin>>num;
v.push_back(num);
}
dp[0]=1;
for(int i=0;i<n;i++)
{
for(int j=v[i];j<=target;j++)
{
dp[j]+=dp[j-v[i]]%mod;
}
}
cout<<dp[target]%mod;
return 0;
}