#include<bits/stdc++.h>
using namespace std;
int tree[800001];
int arr[200001];
int query(int node,int start,int end,int l,int r)
{
if(end<l || r<start) return INT_MAX;
else if(l<=start && end<=r) return tree[node];
else if(start==end) return tree[node];
int mid=(start+end)/2;
int left=query(node*2,start,mid,l,r);
int right=query(node*2+1,mid+1,end,l,r);
return min(left,right);
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
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
build(1,0,n-1);
while(q--)
{
int l,r;
cin>>l>>r;
l--;
r--;
cout<<query(1,0,n-1,l,r)<<endl;
}
}