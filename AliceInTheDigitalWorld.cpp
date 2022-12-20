#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vector<int> v(n);
		vector<int> idx;
		for(int i=0;i<n;i++)
		{
			int num;
			cin>>num;
			if(num==m) idx.push_back(i);
			v[i]=num;
		}
		int best=0;
		int total=0;
		for(int i=0;i<idx.size();i++)
		{
			total=m;
			for(int j=idx[i]-1;j>=0;j--)
			{
				if(v[j]<=m) break;
				total+=v[j];
			}
			for(int j=idx[i]+1;j<v.size();j++)
			{
				if(v[j]<=m) break;
				total+=v[j];
			}
			best=max(best,total);

		}
		cout<<best<<endl;
	}
	return 0;
}
