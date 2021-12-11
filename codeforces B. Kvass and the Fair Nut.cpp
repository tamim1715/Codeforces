
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
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define INF 1e9
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
ll n,s;
ll t[10009];
bool check(ll x)
{
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        if(x>t[i]) return false;
        sum+=(t[i]-x);
    }
    if(sum>=s) return true;
    else return false;

}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();


    cin>>n>>s;

    ll sum=0LL;
    fl(0LL, n)
    {
        cin>>t[i];
        sum+=t[i];
    }
    if(sum<s)
    {
        cout<<-1<<endl;
        return 0;

    }
    if(sum==s)
    {
        cout<<0<<endl;
        return 0;
    }
    ll low=1,high=INF,mid;
    ll ans=0LL;
    while(low<=high)
    {
        mid=(high+low)/2;
        if(check(mid))
        {
            low=mid+1;
            ans=max(ans, mid);
        }
        else high=mid-1;
    }
    cout<<ans<<endl;


    return 0;
}


