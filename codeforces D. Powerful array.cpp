
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
ll ans[210000],t[210000],cnt[2010000],sum=0LL,k;

struct tamim
{
    ll index, l, r;

}query[210000];

bool cmp(tamim a, tamim b)
{
    ll own=a.l/k;
    ll other=b.l/k;
    if(own==other) return a.r<b.r;
    return own < other;
}

void add(ll cur)
{
    sum-=(cnt[t[cur]]*cnt[t[cur]]*t[cur]);
    //cout<<sum<<" check prothom "<<cnt[cur]<<endl;
    cnt[t[cur]]++;
    sum+=(cnt[t[cur]]*cnt[t[cur]]*t[cur]);
     //cout<<sum<<" check "<<cnt[cur]<<endl;
}
void remove(ll cur)
{
    sum-=(cnt[t[cur]]*cnt[t[cur]]*t[cur]);
    cnt[t[cur]]--;
    sum+=(cnt[t[cur]]*cnt[t[cur]]*t[cur]);
}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    CLR(cnt);
    ll n,q;
    scanf("%lld %lld", &n, &q);
    k=sqrt(n);
    for(ll i=0; i<n; i++) scanf("%lld", &t[i]);
    for(ll i=0; i<q; i++)
    {
        scanf("%lld %lld", &query[i].l,&query[i].r);
        query[i].l--;
        query[i].r--;
        query[i].index=i;
    }
    sort(query, query+q, cmp);
    ll l=0,r=-1;
    for(ll i=0; i<q; i++)
    {
        while(r<query[i].r) add(++r);
        while(l<query[i].l) remove(l++);
        while(r>query[i].r) remove(r--);
        while(l>query[i].l) add(--l);
        ans[query[i].index]=sum;
    }
    for(ll i=0; i<q; i++)
    {
        printf("%lld\n", ans[i]);
    }

    return 0;
}

