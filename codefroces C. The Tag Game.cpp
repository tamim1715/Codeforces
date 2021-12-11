
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


int n,x,a,b;
int level[2000009],level2[2000009];
void bfs(int u)
{
    visited[u]=1;
    level[u]=0;
    queue<int>q;
    q.push(u);
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        for(int i=0; i<G[f].size(); i++)
        {
            int v=G[f][i];
            if(!visited[v])
            {
                visited[v]=1;
                level[v]=level[f]+1;
                q.push(v);
            }
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

    cin>>n>>x;
    f(0,n-1)
    {
        cin>>a>>b;
        G[a].pb(b);
        G[b].pb(a);
    }
    bfs(1);
    for(int i=1; i<=n; i++)
    {

        level2[i]=level[i];
    }
    memset(level, 0, sizeof(level));
    visited.clear();
    bfs(x);
    int cnt=level2[x];
    for(int i=2; i<=n; i++)
    {
        if(level[i]<level2[i]) cnt=max(cnt, level2[i]);
    }
    cout<<cnt*2<<endl;




    return 0;
}

