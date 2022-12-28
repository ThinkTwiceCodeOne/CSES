#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,x;
	cin>>x>>n;
	set<int> position;
	multiset<int> ans;
	position.insert(0);
	position.insert(x);
	ans.insert(x-0);
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		position.insert(num);
		auto it=position.find(num);
		int previousValue=*prev(it);
		int nextValue=*next(it);
		ans.erase(ans.find(nextValue-previousValue));
		ans.insert(num-previousValue);
		ans.insert(nextValue-num);
		cout<<*ans.rbegin()<<" ";
	}
	return 0;
}
