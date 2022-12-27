#include<iostream>
using namespace std;
#define ll long long
ll exp(ll a, ll n, ll m)
{
    ll result = 1LL;
    while(n){
        if(n%2){
            result = (result*a)%m;
        }
        a = (a*a)%m;
        n>>=1;
    }
    return result;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>a>>b>>c;
		ll mod=1e9+7;
		ll r=exp(b,c,mod-1);
		cout<<exp(a,r,mod)<<endl;
	}
	return 0;
}
