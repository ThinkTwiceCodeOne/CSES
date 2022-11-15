#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(b>a)
		{
			swap(a,b);
		}
		if((a>2*b) || (a+b)%3!=0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}