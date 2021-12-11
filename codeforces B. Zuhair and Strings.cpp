
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


    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<string, int>mp;
    map<string, int>::iterator it;

    for(int i=0; i<n; i++)
    {
        string s1="";
        int cnt=0,j;
        for(j=i; j<n; j++)
        {
            if(s[i]==s[j])
            {
                s1+=s[j];
                cnt++;
            }
            else{
                break;
            }

            if(cnt==k)
            {
                mp[s1]++;
                j++;
                break;
            }
        }
        i=j-1;
        //cout<<i<<endl;
    }
    int mx=0;
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        if(mx<it->second) mx=it->second;
    }
    cout<<mx<<endl;


    return 0;
}

