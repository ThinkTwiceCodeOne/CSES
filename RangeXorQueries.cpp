#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,q;
	cin>>n>>q;
	int arr[n];
	for(int i=0;i<n;i++) cin>>arr[i];
	int sum[n];
	sum[0]=arr[0];
	for(int i=1;i<n;i++) sum[i]=sum[i-1]^arr[i];
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		l--;
		r--;
		int ans=sum[r];
		if(l>0) 
		{
			ans^=sum[l-1];
			cout<<ans<<endl;
		}
		else cout<<ans<<endl;
		
	}
	return 0;
}