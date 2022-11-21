#include<iostream>
using namespace std;
int main()
{
string s;
cin>>s;
int cnt=1;
int i=0;
int res=-1;
while(i<s.size())
{
if(s[i]==s[i+1])
{
i=i+1;
cnt++;
}
else 
{
i=i+1;
res=max(res,cnt);
cnt=1;
}
}
cout<<res;
return 0;
}