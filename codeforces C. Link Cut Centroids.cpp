
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

#define L length()


#define all(a) a.begin(), a.end()
#define CLR(a)  memset(a,0,sizeof(a))

#define pii pair<int, int>
#define F  first
#define S  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1000000007



int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int r,r1;
int n;
int cnt[100001];
void dfs(int u,int p)
{
     cnt[u]=1;
    visited[u]=1;
    for(int i=0; i<G[u].size(); i++)
    {
        int v=G[u][i];
        if(!visited[v])
        {
            dfs(v, u);
            cnt[u]+=cnt[v];
        }
    }
    if(cnt[u]*2==n)
    {
        r=u;
        r1=p;
    }
}


int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    while(tst--)
    {
        G.clear();
        visited.clear();
        CLR(cnt);

        cin>>n;

        int x,y;
        for(int i=1; i<n; i++)
        {
            cin>>x>>y;
            G[x].pb(y);
            G[y].pb(x);
        }

        r=0;
        r1=0;
        dfs(1,0);

        if(!r)
        {
            cout<<1<<" "<<G[1][0]<<endl;
            cout<<1<<" "<<G[1][0]<<endl;
        }
        else
        {
            int p=G[r][0];
            if(p==r1)
            {
                p=G[r][1];
            }
            cout<<r<<" "<<p<<endl;
            cout<<p<<" "<<r1<<endl;
        }



    }


    return 0;
}

