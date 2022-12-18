#include<bits/stdc++.h>
using namespace std;
void Computelps(string pat,int m,int lps[])
{
	lps[0]=0;
	int i=0;
	int j=1;
	while(j<m)
	{
		if(pat[i]==pat[j])
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
int solve(string txt,string pat)
{
	int m=pat.size();
	int n=txt.size();
	int lps[m];
	Computelps(pat,m,lps);
	int i=0;
	int j=0;
	int res=0;
	while(i<n)
	{
		if(txt[i]==pat[j])
		{
			i++;
			j++;
		}
		if(j==m)
		{
			j=lps[j-1];
			res++;
		}
		else if(i<n && pat[j]!=txt[i])
		{
			if(j==0) i=i+1;
			else j=lps[j-1];
		}
	}
	return res;
}
int main()
{
	string txt,pat;
	cin>>txt>>pat;
	cout<<solve(txt,pat);
	return 0;
}
