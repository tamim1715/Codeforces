#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<set>
#include<queue>
#include<cstring>

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

#define pi 3.14159265358979323846


int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}



void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<char, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};

int cost[400005];
queue<int>q;


// void dfs(int u){
//     visited[u]=1;
//     for(int i=0; i<G[u].size(); i++){
//         int v=G[u][i];
//         if(!visited[v])
//         {
//             cost[v]=max(cost[v], cost[u]+1);
//             dfs(v);
//         }
//     }

// }


int main()
{
    // freopen("tamim.txt", "w", stdout);
    // freopen("tamim1.txt", "r", stdin);
    fast();
    int tst;
    cin>>tst;
    while(tst--) 
    {
        G.clear();
        visited.clear();
        
        
        int n,m,a,b;
        cin>>n>>m;
        if(n==1){
            if(m==0) cout<<1<<endl;
            else cout<<0<<endl;
            continue;
        }
        int indegree[n+5];

        for(int i=1; i<=n; i++) indegree[i]=0,cost[i]=9999999;
        for(int i=0; i<n-1; i++){
            cin>>a>>b;
            indegree[a]++;
            indegree[b]++;
            G[a].pb(b);
            G[b].pb(a);
        }
        for(int i=1; i<=n; i++){
            
            if(indegree[i]==1){
                q.push(i);
                cost[i]=1;
                // indegree[i]--;
            }
            // cout<<indegree[i]<<" "<<i<<endl;
        }
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(int i=0; i<G[x].size(); i++){
                int v=G[x][i];
                indegree[v]--;
                if(indegree[v]==1){
                    q.push(v);
                    cost[v]=min(cost[v], cost[x]+1);
                }
            }

        }
        int ans=0;
        for(int i=1; i<=n; i++){
            if(cost[i]>m){
                // cout<<i<<" "<<cost[i]<<endl;
                ans++;
            } 
        }
        cout<<ans<<endl;
        

    }
    return 0;
}

