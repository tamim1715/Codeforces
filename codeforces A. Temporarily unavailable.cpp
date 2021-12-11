
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
map<int, int>visited;
set<int>st;
vector<int>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator sit;
vector<int>::iterator itv;

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
    ll tst;
    cin>>tst;
    while(tst--)
    {
        ll a,b,c,r;
        cin>>a>>b>>c>>r;
        ll x=c+r;
        ll y=c-r;
        if(a>b) swap(a,b);
        if(a<=min(x,y)&&b>=max(x,y))
        {
            cout<<max(0LL, (b-a)-abs((max(x,y)-min(x,y))))<<endl;
        }
        else if(min(x,y)<b&&max(x,y)>a&&max(x,y)>b)
        {
            cout<<max(0LL, (b-a)-abs((b-min(x,y))))<<endl;
        }
        else if(max(x,y)>a&&min(x,y)<b&&min(x,y)<a)
        {
            cout<<max(0LL, (b-a)-abs((max(x,y)-a)))<<endl;
        }
        else cout<<max(0LL, b-a)<<endl;

    }
    return 0;
}
