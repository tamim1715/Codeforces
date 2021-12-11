
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
#define s(a) sort(a.begin(), a.end())
#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, int>mpi;
map<string, int>mps;
map<int, vector<int> > path;
map<int, int>visited;
set<int>st;
vector<int>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator sit;
vector<int>::iterator itv;

void fresh() { mpi.clear(); mps.clear(); st.clear(); v.clear(); path.clear(); visited.clear(); }

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    ll tst;
    cin>>tst;
    while(tst--)
    {
        ll n,p,k;
        cin>>n>>p>>k;
        ll t[n+5];
        t[0]=0LL;
        fl(1,n+1) cin>>t[i];
        ll sum[n+5];
        sort(t+1, n+t+1);

        ll x=0LL,cnt=0LL;
        bool flag=true;
        sum[0]=0LL;
        fl(1,n+1) sum[i]=t[i]+sum[i-1];
        fl(1,n+1)
        {

            if(i-k>=0)
            {
                sum[i]=min(sum[i], (t[i]+sum[i-k]));
            }
            if(sum[i]<=p) cnt=i;
        }
        cout<<cnt<<endl;
    }

    return 0;
}


