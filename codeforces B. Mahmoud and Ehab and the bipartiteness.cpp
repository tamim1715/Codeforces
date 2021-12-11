
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
ll cnt[5];
void dfs(int u, int p, int color)
{
    cnt[color]++;
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(v!=p) dfs(v,u,!color);
    }
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();


    int n,m,a,b;
    cin>>n;
    for(int i=0; i<n-1; i++)
    {
        cin>>a>>b;
        G[a].pb(b);
        G[b].pb(a);
    }
    dfs(1, 0, 0);
    //cout<<cnt[0]<<" cnt value "<<cnt[1]<<endl;
    cout<<cnt[0]*cnt[1]-n+1<<endl;
    return 0;
}

