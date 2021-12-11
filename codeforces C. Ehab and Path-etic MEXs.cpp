
/* SHAHADATH HOSSAIN TAMIM
   BANGLADESH UNIVERSITY OF BUSINESS AND TECHNOLOGY
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define pob pop_back
#define sti(a) st.insert(a)
#define gcd __gcd
#define lcm(a,b) (a*b)/__gcd(a,b)
#define l s.length()
#define sts st.size()
#define mpss mps.size()
#define mpis mpi.size()
#define vs v.size()
#define sort(a) sort(a.begin(), a.end())
#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

map<int, int>mpi;
map<string, int>mps;
map<int, vector<int> > path;

set<int>st;
vector<int>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator sit;
vector<int>::iterator itv;
map<int, int>visited;
map<pair<int, int>, int> mp;
vector< pair<int ,int> >store;
map<pair<int, int>, int>:: iterator it;
int sum=0;
void dfs(int u)
{
    visited[u]=1;
    f(0, path[u].size())
    {
        int v= path[u][i];

        if(path[v].size()==1&&mp.count({u,v})&&mp[{u,v}]==-1)
        {
           mp[{u,v}]=sum++;
        }
        else if(path[v].size()==1&&mp[{v,u}]==-1)
        {
            mp[{v,u}]=sum++;
        }
        if(!visited[v]) dfs(v);
    }


}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    mpi.clear();
    mps.clear();
    st.clear();
    v.clear();
    path.clear();
    visited.clear();
    int n;
    cin>>n;
    n--;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        path[a].pb(b);
        path[b].pb(a);
        store.pb({a,b});
        mp[{a,b}]=-1;
    }
    dfs(1);

    for(it=mp.begin(); it!=mp.end(); it++)
    {
        if(it->second==-1) it->second=sum++;
    }
    f(0, store.size())
    {
        cout<<mp[store[i]]<<endl;
    }
    return 0;
}

