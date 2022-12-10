#include<bits/stdc++.h>
using namespace std;
bool isValid(int i,int j,int n,int m,vector<vector<char>>& v)
{
if(i>=0 && j>=0 && i<n && j<m && v[i][j]=='.') return true;
return false;
}
int main()
{
int n,m;
cin>>n>>m;
vector<vector<char>> v(n,vector<char>(m));
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
cin>>v[i][j];
}
}
int startX,startY,endX,endY;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if(v[i][j]=='A') 
{
startX=i;
startY=j;
}
if(v[i][j]=='B')
{
endX=i;
endY=j;
}
}
}
v[endX][endY]='.';
vector<vector<char>> res(n,vector<char>(m));
queue<pair<int,int>> q;
q.push(make_pair(startX,startY));
bool found=false;
while(!found && !q.empty())
{
int newX=q.front().first;
int newY=q.front().second;
q.pop();
if(isValid(newX+1,newY,n,m,v)) 
{
q.push(make_pair(newX+1,newY));
v[newX+1][newY]='D';
if(endX==newX+1 && endY==newY) found=true;
}
if(isValid(newX-1,newY,n,m,v))
{
q.push(make_pair(newX-1,newY));
v[newX-1][newY]='U';
if(endX==newX-1 && endY==newY) found=true;
}
if(isValid(newX,newY+1,n,m,v))
{
q.push(make_pair(newX,newY+1));
v[newX][newY+1]='R';
if(endX==newX && endY==newY+1) found=true;
}
if(isValid(newX,newY-1,n,m,v))
{
q.push(make_pair(newX,newY-1));
if(endX==newX && endY==newY-1) found=true;
v[newX][newY-1]='L';
}
}
if(found==false)
{
cout<<"NO"<<endl;
return 0;
}
string ans="";
while(!(endX==startX && endY==startY))
{
ans+=v[endX][endY];
if(v[endX][endY]=='U') endX++;
else if(v[endX][endY]=='D') endX--;
else if(v[endX][endY]=='R') endY--;
else if(v[endX][endY]=='L') endY++;
}
cout<<"YES"<<endl;
cout<<ans.size()<<endl;
reverse(ans.begin(),ans.end());
cout<<ans;
cout<<endl;
return 0;
}