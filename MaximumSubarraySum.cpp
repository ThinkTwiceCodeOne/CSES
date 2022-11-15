#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
vector<int> v;
for(int i=0;i<n;i++)
{
int num;
cin>>num;
v.push_back(num);
}
long long int ans=INT_MIN;
long long int sum=0;
for(int i=0;i<n;i++)
{
sum=sum+v[i];
if(sum>ans)
{
ans=sum;
}
if(sum<0) 
{
sum=0;
}
}
cout<<ans;
return 0;
}