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
if(v.empty() || num>v.back()) v.push_back(num);
else *lower_bound(v.begin(),v.end(),num)=num;
}
cout<<v.size();
return 0;
}