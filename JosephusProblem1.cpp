#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	queue<int> q;
	vector<int> ans;
	for(int i=1;i<=n;i++) q.push(i);
	while(q.size()!=1)
	{
		int j=q.front();
		q.pop();
		q.push(j);
		ans.push_back(q.front());
		q.pop();
	}
	for(int i=0;i<ans.size();i++) cout<<ans[i]<<" ";
	cout<<q.front();
	q.pop();
	return 0;
}
