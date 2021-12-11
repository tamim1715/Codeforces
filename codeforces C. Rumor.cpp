
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

#define l s.length()


#define all(a) a.begin(), a.end()
#define CLR(a)  memset(a,0,sizeof(a))


#define xx  first
#define yy  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1e9+7

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;
ll c[2000009];
ll gold;
void dfs(int u)
{
    visited[u]=1;
    if(c[u]<gold) gold=c[u];
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(!visited[v]) dfs(v);
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int n,m,a,b;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        cin>>c[i];
    }
    while(m--)
    {
        cin>>a>>b;
        G[a].pb(b);
        G[b].pb(a);
    }
    ll tot=0LL;
    for(int i=1; i<=n; i++)
    {
        gold=99999999999LL;
        if(!visited[i])
        {
            dfs(i);
            //cout<<" gold "<<gold<<endl;
            tot+=gold;
        }
    }
    cout<<tot<<endl;
    return 0;
}

