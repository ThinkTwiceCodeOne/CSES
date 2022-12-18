#include<bits/stdc++.h>
using namespace std;
void solve(string s,int m,int lps[])
{
	lps[0]=0;
	int i=0;
	int j=1;
	while(j<m)
	{
		if(s[i]==s[j])
		{
			i++;
			lps[j]=i;
			j++;
		}
		else
		{
			if(i==0)
			{
				lps[j]=i;
				j++;
			}
			else
			{
				i=lps[i-1];
			}
		}
	}
}
int main()
{
	string s;
	cin>>s;
	int m=s.size();
	int lps[m];
	solve(s,m,lps);
	vector<int> ans;
	int j=lps[m-1];
	while(j>0)
	{
		ans.push_back(j);
		j=lps[j-1];
	}
	sort(ans.begin(),ans.end());
	for(auto it:ans) cout<<it<<" ";
	return 0;
}
