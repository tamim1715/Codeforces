#include<iostream>
#include<map>
#include<cmath>
#include<vector>
#include<cstring>
#include<algorithm>
#define pb push_back
using namespace std;
map<int, vector<int> >G;
map<int, int>visited;
//vector<string>v;
int u[2000009],v[2000009],t[2000009];
bool flag=true;
void dfs(int u, int cnt)
{
	visited[u]=1;
	t[u]=cnt;
	for(int i=0; i<G[u].size(); i++)
	{
       int v=G[u][i];
	   if(!visited[v]) dfs(v, 1-cnt);
	   else if(t[u]==t[v]) {flag=0; return;}

	}
}

int main()
{
    G.clear();
    visited.clear();
	int n,m,a,b;
	cin>>n>>m;
	for(int i=0; i<m; i++)
	{
		cin>>u[i]>>v[i];
		//dp[i+1]=a;
		G[u[i]].pb(v[i]);
		G[v[i]].pb(u[i]);
	}
	dfs(1,0);
	if(!flag) { cout<<"NO"<<endl; return 0;}
	//int cnt=0;
	cout<<"YES"<<endl;
	for(int i=0; i<m; i++)
	{
		cout<<t[u[i]];
	}
	cout<<endl;
	//int x=n-cnt;
//	cout<<max(0, m-x)<<endl;
	return 0;

}
