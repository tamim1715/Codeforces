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

map<int, int>mpi;
map<string, int>mps;
set<int>st;
vector<int>v;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<int>:: iterator it;
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
    //q.clear();
    queue<int>q;
    int n,k;
    cin>>n>>k;
    f(0,n)
    {
        int a;
        cin>>a;
        if(mpi[a]==0)
        {
            q.push(a);
            mpi[a]=1;
        }
        if(q.size()>k)
        {
            int b=q.front();
            mpi[b]=0;
            q.pop();
        }
    }
   while(!q.empty())
   {
       //cout<<q.front()<<" ";

       v.pb(q.front());
       q.pop();
   }
   cout<<vs<<endl;
   for(int i=vs-1; i>=0; i--) cout<<v[i]<<" ";
   cout<<endl;
    return 0;
}

