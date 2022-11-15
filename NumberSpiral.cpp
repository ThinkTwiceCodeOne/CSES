#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long long int n,m;
cin>>n>>m;
n=n-1;
m=m-1;
int ma=max(n,m);
int mi=min(n,m);
cout<<ma<<" "<<mi<<endl;
long long int a=ma*(ma+1);
cout<<a<<endl;
unsigned long long int final=(ma*(ma+1))+(ma+1);
cout<<"final value is "<<final<<endl;
unsigned long long int ans;
if(mi==0)
{
if(ma%2==0) 
{
ans=final-(ma*2);
}
else ans=final;
}
else ans=final-mi;
cout<<ans<<endl;
}
return 0;
}