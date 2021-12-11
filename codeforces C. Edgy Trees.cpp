
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
const int mod = 1000000007;

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}
bool falg=false;
//int cnt=0;
//vector<ll>v;
map<int, int>mp;
vector<string>v;
map<int, vector<int> >G;
map<int, int>visited;
int n,m,a,c,b;
ll mx=1LL,cnt=0,ans=0;
//ll	 t[105];
int bigmod(int a, int b)
{
	if(b==0) return (1%mod);
	ll x=bigmod(a,b/2);
	x=(x*x)%mod;
	if(b%2) x=(x*a)%mod;
	return x;
}
void dfs(int u)
{
	//v.pb(t[u]);
	visited[u]=1;
	cnt++;
	for(int i=0; i<G[u].size(); i++)
	{
		int v=G[u][i];
		if(!visited[v])
		{
			//cnt*=2;

			//mx=max(cnt, mx);
			dfs(v);
		}
	}
}
int main()
{
    fast();
	int k;
	cin>>n>>k;
	visited.clear();
	G.clear();
	for(int i=1; i<n; i++)
	{
		cin>>a>>b>>c;
		if(!c){
		G[a].pb(b);
		G[b].pb(a);
		}
	}
	//sort(t+1, t+n+1);
	for(int i=1; i<=n; i++)
	{
		//for(int i=0; i<v.size(); i++) cout<<v[i]<<" ";
		//cout<<endl;
	//	cnt=1;
	    cnt=0;
		if(!visited[i])
		{
		      dfs(i);
		      if(cnt==0) ans=(ans+1)%mod;
		      else
		      {
		      	ans=(ans%mod+(bigmod(cnt,k)))%mod;
		      	ans%=mod;
            }
		}
	}
	cout<<(bigmod(n,k)-ans+mod)%mod<<endl;
	return 0;
}
