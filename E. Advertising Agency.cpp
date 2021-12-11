
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

#define pi 3.14159265358979323846


int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}



void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};

ll fact[1009];
void cal(){
fact[0]=1;
fact[1]=1;
for(ll i=2; i<=1001; i++) fact[i]=(fact[i-1]*i)%mod;
}

ll inverse(ll a, ll b)
{
    if(b==0) return 1%mod;
    ll x=inverse(a, b/2);
    x=(x*x)%mod;
    if(b%2) x=(x*a)%mod;
    return x;
}


ll ncr(ll n, ll r)
{
    return (fact[n]%mod*inverse((fact[r]*fact[n-r])%mod, mod-2))%mod;
}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    cal();
    int tst;
    cin>>tst;
    while(tst--)
    {
        v.clear();
        int n,k,a;
        cin>>n>>k;

        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.pb(a);
        }
        sort(all(v));
        reverse(all(v));
        int check=v[k-1];
        int cnt=0,cnt1=0;
        for(int i=0; i<n; i++)
        {
            if(check==v[i]) cnt++;
        }
        for(int i=0; i<k; i++) if(check==v[i]) cnt1++;
        ll ans=ncr(cnt, cnt1);
        cout<<ans<<endl;



    }


    return 0;
}
