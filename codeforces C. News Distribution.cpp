
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

int cnt;
void dfs(int u)
{
    visited[u]=cnt;
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

    int n,m,x,a,b;
    cin>>n>>m;
    while(m--)
    {
        cin>>x;
        while(x)
        {
            x--;
            cin>>a;
            while(x)
            {
                cin>>b;
                G[a].pb(b);
                G[b].pb(a);
                x--;
            }

        }

    }
    visited.clear();
    cnt=0;
    for(int i=1; i<=n; i++)
    {

        if(!visited[i]) cnt++, dfs(i);
        mp[visited[i]]++;

    }
    for(int i=1; i<=n; i++)
    {
        cout<<mp[visited[i]]<<" ";
    }
    cout<<endl;

    return 0;
}

