
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

/*ll n,p,cnt=0LL,mn=9999;
ll t[40];
void backtrack(int at, ll sum, int x)
{
    if(sum==n)
    {
        mn=min(mn, (ll)x);
        return;
        //cout<<mn<<endl;
    }
    if(sum>n)
    {
        return;
    }
    for(int i=a; i<cnt; i++)
    {
        x++;

        backtrack(i+1, sum+t[i], x);
        x--;
    }
}*/
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();


    int n,p;
    cin>>n>>p;

    for(int i=0; i<=n-(i*p); i++)
    {
        if(i>=__builtin_popcount(n-i*p))
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}


