#include <bits/stdc++.h>
using namespace std;
#define LL long long
int n,m,dx[]={1,-1,0,0},dy[]={0,0,1,-1};
string arr[51];
bool vis[51][51],check;
void dfs(int i,int j,int s,int ii,int jj)
{
    vis[i][j]=1;
    for(int c=0;c<4;c++)
    {
        int x=i+dy[c],y=j+dx[c];
        if(x>=0&&x<n&&y>=0&&y<m){
        if(!vis[x][y]&&arr[x][y]==arr[i][j])dfs(x,y,s+1,i,j);
        else if(vis[x][y]&&arr[x][y]==arr[i][j]&&(x!=ii||y!=jj)&&s>=4)check=1;}
    }
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>arr[i];
	for(int i=0;i<n;i++)for(int j=0;j<m;j++)
        if(!vis[i][j])
        dfs(i,j,1,i,j);
	check?cout<<"Yes":cout<<"No";
return 0;
}
