#include<bits/stdc++.h>
using namespace std;
long long int arr[200001];
long long int tree[800001];
void build(int node,int start,int end)
{
	if(start==end) tree[node]=arr[start];
	else
	{
		int mid=(start+end)/2;
		int left=node*2;
		int right=node*2+1;
		build(left,start,mid);
		build(right,mid+1,end);
		tree[node]=0;
	}
}
void update(int node,int start,int end,int l,int r,int val)
{
	if(end<l || r<start) return;
	if(start==end) tree[node]+=val;
	else if(l<=start && end<=r) tree[node]+=val;
	else
	{
		int mid=(start+end)/2;
		update(node*2,start,mid,l,r,val);
		update(node*2+1,mid+1,end,l,r,val);
	}
}
void propogate(int node,int start,int end)
{
	if(start==end) return;
	int left=node*2;
	int right=node*2+1;
	tree[left]+=tree[node];
	tree[right]+=tree[node];
	tree[node]=0;
}
long long int query(int node,int start,int end,int idx)
{
	propogate(node,start,end);
	if(start==end) return tree[node];
	else
	{
		int mid=(start+end)/2;
		if(start<=idx && idx<=mid)
		{
			return query(node*2,start,mid,idx);
		}
		else return query(node*2+1,mid+1,end,idx);
	}
}
int main()
{
	int n,q;
	cin>>n>>q;
	for(int i=0;i<n;i++) cin>>arr[i];
	build(1,0,n-1);
	while(q--)
	{
		int t;
		cin>>t;
		if(t==1)
		{
			int a,b,u;
			cin>>a>>b>>u;
			a--;
			b--;
			update(1,0,n-1,a,b,u);
		}
		if(t==2)
		{
			int k;
			cin>>k;
			k--;
			cout<<query(1,0,n-1,k)<<endl;
		}
	}
	return 0;
}