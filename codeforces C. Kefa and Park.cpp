
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
int cat[1000000];
int cnt=0;
int x=0;
int n,m;
void dfs(int u)
{
        visited[u]=1;

        if(cat[u]>m) return;
       for(int i=0; i<G[u].size(); i++)
        {

            int v=G[u][i];
            if(!visited[v])
            {
                if(mp[v]==1)
                {
                    cat[v]=cat[u]+1;
                }
                else cat[v]=0;
                if(G[v].size()==1&&cat[v]<=m) cnt++;
                dfs(v);
            }
        }

}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    visited.clear();
    G.clear();
    mp.clear();

    int a,b,y;

    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        cin>>a;
        mp[i]=a;
    }
    for(int i=1; i<n; i++)
    {
        cin>>a>>b;
        G[a].pb(b);
        G[b].pb(a);
    }
    cnt=0;
    if(mp[1]==1) cat[1]=1;
    dfs(1);
    cout<<cnt<<endl;


    return 0;
}

