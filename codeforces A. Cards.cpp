
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
    int x;
    cin>>x;
    string s;
    cin>>s;

    int z=0,o=0,n=0,e=0,r=0;
    for(int i=0; i<x; i++)
    {
        if(s[i]=='z') z++;
        else if(s[i]=='o') o++;
        else if(s[i]=='n') n++;
        else if(s[i]=='e') e++;
        else if(s[i]=='r') r++;
    }
    //cout<<z<<" "<<e<<" "<<r<<" "<<o<<endl;
    int one=min(o, min(n, e));
    o-=one;
    n-=one;
    e-=one;
    int zero=min(z, min(e, min(r,o)));
    for(int i=0; i<one; i++) cout<<1<<" ";
    for(int i=0; i<zero; i++) cout<<0<<" ";
    cout<<endl;


    return 0;
}

