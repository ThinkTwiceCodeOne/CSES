#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++) cin>>v[i];
	long long int sum=0;
	sort(v.begin(),v.end());
	for(int i=0;i<n-1;i++)
	{
		sum=sum+v[i];
	}
	if(sum<=v.back()) cout<<v.back()*2<<endl;
	else cout<<sum+v.back()<<endl;
	return 0;
}
