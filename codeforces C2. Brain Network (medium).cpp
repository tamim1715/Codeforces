
/* SHAHADATH HOSSAIN TAMIM
   BANGLADESH UNIVERSITY OF BUSINESS AND TECHNOLOGY
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back
#define pob pop_back

#define gcd __gcd
#define lcm(a,b) (a*b)/__gcd(a,b)

#define L s.length()


#define all(a) a.begin(), a.end()
#define CLR(a)  memset(a,0,sizeof(a))


#define F  first
#define S  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1e9+7

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

int  w[500][500],s[500000],level[1000000];
map<int, vector<int> > G;
map<int, int>visited;
int  mx=0LL,cnt=0LL,p;
vector<pair<int , int > >v;
void bfs(int u)
{
    level[u]=1;
    v.pb({level[u], u});
    queue<int>q;
    q.push(u);
    visited[u]=1;
    while(!q.empty())
    {
        int f=q.front();
        //cout<<f<<" "<<G[f].size()<<endl;
        q.pop();
        for(int i=0; i<G[f].size(); i++)
        {

            int x=G[f][i];

            if(!visited[x])
            {

                level[x]=level[f]+1;
                visited[x]=1;
                v.pb({level[x], x});
                q.push(x);
                //cout<<x<<" "<<f<<" "<<level[x]<<endl;
            }
        }
    }
}
void dfs(int u)
{
	visited[u]=1;
	for(int i=0; i<G[u].size(); i++)
	{
		int x=G[u][i];
		if(!visited[x])
		{
		    visited[x]=1;
			s[x]=cnt;
			cnt++;
			//p=cnt;
			//cnt+=w[u][v];
			//cout<<"age "<<cnt<<endl;
			mx=max(cnt, mx);
			dfs(x);
			//cout<<v<<" "<<cnt<<" "<<s[v]<<endl;
			cnt=s[x];

			//cout<<" pore "<<cnt<<endl;
		}
	}


}

int main()
{
	int a,b,c,m,n;
	cin>>n>>m;
	G.clear();
	for(int i=1; i<=m; i++)
	{
		cin>>a>>b;
		G[a].pb(b);
		G[b].pb(a);
		//w[a][b]=c;
		//w[b][a]=c;
	}
	//for(int i=0; i<G[3].size(); i++) cout<<G[3][i]<<endl;
	bfs(1);
	sort(all(v));
	reverse(all(v));
	mx=0LL;
	visited.clear();
	for(int i=0; i<n; i++)
	{
		cnt=0;
		int p=v[i].S;
		//cout<<p<<endl;
		if(!visited[p]&&G[p].size()==1) dfs(p);
	}
	cout<<mx<<endl;
	return 0;

}
