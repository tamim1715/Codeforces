
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
ll t[100009];
ll n,k;
void bs(ll n, ll k)
{
    ll low=1,high=100000,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(t[mid]<k) low=mid+1;
        else if(t[mid]+mid-k==n) break;
        else if(t[mid]+mid-k>n) high=mid-1;
        else if(t[mid]+mid-k<n) low=mid+1;
    }
    //cout<<t[mid]<<endl;
    cout<<t[mid]-k<<endl;
}
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    cin>>n>>k;
    t[0]=0;
    for(int i=1; i<=100000; i++)
    {
        t[i]=t[i-1]+i;
    }
    bs(n,k);
    return 0;
}

