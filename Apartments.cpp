#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m,k;
cin>>n>>m>>k;
vector<int> v1,v2;
for(int i=0;i<n;i++)
{
int num;
cin>>num;
v1.push_back(num);
}
for(int i=0;i<m;i++)
{
int num;
cin>>num;
v2.push_back(num);
}
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
int idx=0;
int ans=0;
for (int i = 0; i < n; i++) {
        while (idx < m) {
            if (v2[idx] + k < v1[i]) {
                idx++;
            } else if (v2[idx] - k > v1[i]) {
                break;
            } else {
                idx++, ans++;
                break;
            }
        }
    }
cout<<ans;
return 0;
}