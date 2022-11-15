#include<iostream>
#include<list>
#include<map>
using namespace std;
int main()
{
	string s;
	cin>>s;
	map<char,int> m;
	for(int i=0;i<s.size();i++)
	{
		m[s[i]]++;
	}
	int count=0;
	map<char,int>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
		if(it->second%2!=0) count++;
	}
	list<char> res;
	if(count==1 || count==0) 
	{
		for(it=m.begin();it!=m.end();it++)
		{
			if(it->second%2!=0) 
			{
				int n=it->second;
				for(int i=0;i<n;i++)
				{
					res.push_back(it->first);
				}				
			}
		}
		for(it=m.begin();it!=m.end();it++)
		{
			if(it->second%2==0)
			{
				int n=it->second;
				int first=n/2;
				for(int i=0;i<first;i++)
				{
					res.push_back(it->first);
					res.push_front(it->first);
				}
			}
		}
		for(auto it=res.begin();it!=res.end();it++) cout<<*it;
	}
	else cout<<"NO SOLUTION"<<endl;
	return 0;
}