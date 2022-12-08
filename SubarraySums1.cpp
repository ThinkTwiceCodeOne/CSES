#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,x;
cin>>n>>x;
vector<int> v(n);
for(int i=0;i<n;i++) cin>>v[i];
unordered_map<long long int,long long int> m;
long long int currSum=0;
long long int cnt=0;
for(int i=0;i<n;i++)
{
currSum+=v[i];
if(currSum==x) cnt++;
if(m.find(currSum-x)!=m.end()) cnt+=m[currSum-x];
m[currSum]++;
}
cout<<cnt;
return 0;
}