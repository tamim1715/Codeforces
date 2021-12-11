
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
ll t[200009],s[200009],p[200009];
ll n,m;
int bs(ll k,ll check, ll x)
{
    ll low=k,high=n,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(s[mid]-check==x)
        {
            if(n-mid==0) return -1;
            cout<<n-mid<<endl;
            return mid+1;
        }
        if(s[mid]-check>x&&s[mid-1]-check<x)
        {

            cout<<n-mid+1<<endl;
            return mid;
        }
        if(s[mid]-check>x) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();


    cin>>n>>m;
    fl(1LL, n+1) cin>>t[i],s[i]=t[i]+s[i-1],p[i]=t[i]+p[i-1];
    ll x=1,check=0;
    fl(0LL, m)
    {
        ll a;
        cin>>a;
        x=bs(x,check,a);
        check+=a;
        if(x==-1)
        {
            cout<<n<<endl;
            check=0;
        }

    }


    return 0;
}

