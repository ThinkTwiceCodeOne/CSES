#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int n;
cin>>n;
printf("%lld ",n);
while(n!=1)
{
if(n%2==0)
{
n=n/2;
printf("%lld ",n);
}
else
{
n=n*3+1;
printf("%lld ",n);
}
}
return 0;
}