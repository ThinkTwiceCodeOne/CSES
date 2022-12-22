#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i=0;i<n;i++) cin>>v[i];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			sum=sum^v[i];
		}
		if(sum%4==0) cout<<"second"<<endl;
		else cout<<"first"<<endl;
	}
	return 0;
}
