
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
ll t[200009],s[200009];
ll n,m;
void bs(ll x)
{
    ll low=1,high=n,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(s[mid]==x||s[mid]>x&&s[mid-1]<x)
        {
            break;
        }
        if(s[mid]>x) high=mid-1;
        else low=mid+1;
    }
    cout<<mid<<" "<<x-s[mid-1]<<endl;
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();


    cin>>n>>m;
    fl(1LL, n+1) cin>>t[i],s[i]=t[i]+s[i-1];;
    fl(0LL, m)
    {
        ll a;
        cin>>a;
        bs(a);
    }


    return 0;
}

