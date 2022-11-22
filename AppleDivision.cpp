#include<bits/stdc++.h>
using namespace std;
long long int solve(vector<int> v,long long int totalSum,long long int currSum,int n)
{
if(n==0)
{
return abs((totalSum-currSum)-currSum);
}
return min(solve(v,totalSum,currSum+v[n],n-1),solve(v,totalSum,currSum,n-1));
}
int main()
{
int n;
cin>>n;
vector<int> v;
long long int totalSum=0;
long long int currSum=0;
for(int i=0;i<n;i++)
{
int num;
cin>>num;
v.push_back(num);
totalSum+=num;
}
cout<<solve(v,totalSum,currSum,n-1);
return 0;
}