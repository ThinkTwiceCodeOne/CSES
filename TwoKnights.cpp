#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
for(long long int i=1;i<=n;i++)
{
long long int ans=i*i;
long long int final=(ans*(ans-1))/2-4*(i-1)*(i-2);
cout<<final<<endl;
}
return 0;
}