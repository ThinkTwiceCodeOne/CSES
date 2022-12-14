#include<bits/stdc++.h>
using namespace std;
int arr[200001];
int tree[800001];
void update(int node,int start,int end,int pos,int val)
{
	if(start==end){
		arr[start]=val;
		tree[node]=val;
	}
	else
	{
		int mid=(start+end)/2;
		if(start<=pos && pos<=mid) update(node*2,start,mid,pos,val);
		else update(node*2+1,mid+1,end,pos,val);
		tree[node]=min(tree[node*2],tree[node*2+1]);
	}
}
int query(int node,int start,int end,int l,int r)
{
	if(end<l || r<start) return INT_MAX;
	if(l<=start && end<=r) return tree[node];
	if(start==end) return tree[node];
	int mid=(start+end)/2;
	return min(query(node*2,start,mid,l,r),query(node*2+1,mid+1,end,l,r));
}
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
		tree[node]=min(tree[left],tree[right]);
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
		int t,a,b;
		cin>>t>>a>>b;
		if(t==1)
		{
			a--;
			update(1,0,n-1,a,b);
		}
		if(t==2)
		{
			a--;
			b--;
			cout<<query(1,0,n-1,a,b)<<endl;
		}
	}
	return 0;
}