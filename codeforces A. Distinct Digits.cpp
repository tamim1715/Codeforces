
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
int t[200009][26];
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    int a,b;
    cin>>a>>b;
    bool ok=false;
    map<char, int>mp;
    int i;
    for(i=a; i<=b; i++)
    {
        mp.clear();
        int x=i;
        while(x)
        {
            if(!mp.count(x%10)) mp[x%10]++;
            else break;
            x/=10;
        }
        if(x==0){ ok=true; break;}
    }
    if(!ok) cout<<-1<<endl;
    else cout<<i<<endl;

    return 0;
}


