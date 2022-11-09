#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n+1];
arr[0]=1;
for(int i=0;i<=n;i++) arr[i]=0;
for(int i=0;i<n-1;i++)
{
int num;
cin>>num;
arr[num]++;
}
int res;
for(int i=1;i<=n;i++)
{
if(arr[i]==0) res=i;
}
cout<<res;
return 0;
}