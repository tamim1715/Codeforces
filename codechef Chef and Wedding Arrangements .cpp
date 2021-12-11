
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

map<ll, ll>mp,mp1;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
set<int>s;
map<ll, ll>::iterator it;

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    while(tst--)
    {
        ll n,k;
        cin>>n>>k;
        mp.clear();
        mp1.clear();

        ll cnt=0LL,mx=0LL;
        ll a;
        ll t[n];
        for(int i=0; i<n; i++)
        {
            cin>>a;
            t[i]=a;
            mp[a]++;
            mp1[a]++;
            if(mp[a]>1LL)
            {
                mp.clear();
                cnt++;
                mp[a]++;
            }


        }
        ll cnt1=0LL;
        for(it=mp1.begin(); it!=mp1.end(); it++)
        {
            if(it->S > 1LL) cnt1+=it->S;
        }
        cnt++;
        ll ans=k+cnt1;
        if(cnt*k<=k+cnt1)
        {
            cout<<cnt*k<<endl;
            continue;
        }
        mp.clear();
        v.clear();
        for(int i=0; i<n; i++)
        {
            mp[t[i]]++;

            if(mp[t[i]]>1LL||i==n-1)
            {
                if(i==n-1&&mp[t[i]]==1LL) v.pb(t[i]);
                ll one=0LL,two=0LL;
                for(int j=0; j<v.size(); j++)
                {
                    if(mp1[v[j]]==2LL) two++;
                    else if(mp1[v[j]]>1LL) one++;
                }
                if(two*2+one-k>=1)
                {
                    ans-=(two*2+one-k);
                    for(int j=0; j<v.size(); j++)
                    {
                       mp1[v[j]]--;
                    }
                }
                mp.clear();
                v.clear();
                //cout<<ans<<" "<<two<<" "<<one<<endl;


            }
            v.pb(t[i]);




        }
        cout<<ans<<endl;





    }


    return 0;
}

