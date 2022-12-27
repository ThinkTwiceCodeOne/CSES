#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
unsigned long long int a,b;
cin>>a>>b;
unsigned long long int res=1;
int mod=1000000007;
while(b>0)
{
if((b&1)==1) res=(res%mod*a%mod)%mod;
a=(a%mod*a%mod)%mod;
b=b>>1;
}
cout<<res%mod<<endl;
}
return 0;
}
