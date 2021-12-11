
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


#define F  first
#define S  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1e9+7

#define pi 3.14159265358979323846


int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<int, int>mp;
//vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

ll t[100009],l[100009],r[100009],v[100009],csum[100009],ans[100009];

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    ll n,m,k,x,y;
    cin>>n>>m>>k;
    fl(1,n+1) cin>>t[i];
    fl(1, m+1) cin>>l[i]>>r[i]>>v[i];
    fl(1,k+1)
    {
        cin>>x>>y;
        csum[x]++;
        csum[y+1]--;
    }
    fl(1,m+1) csum[i]=csum [i-1]+csum[i];
    fl(1,m+1)
    {
        ans[l[i]]+=csum[i]*v[i];
        ans[r[i]+1]-=csum[i]*v[i];
    }
    fl(1, n+1) ans[i]=ans[i-1]+ans[i];
    fl(1, n+1) cout<<(ll)t[i]+ans[i]<<" ";
    cout<<endl;


    return 0;
}

