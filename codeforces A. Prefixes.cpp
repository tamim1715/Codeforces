
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


    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0; i<n-1; i+=2)
    {
        if(s[i]==s[i+1])
        {
            if(s[i+1]==s[i+2]&&i+2<n||(s[i-1]!=s[i]&&i-1>=0))
            {
                //cout<<s[i]<<endl;
                if(s[i+1]=='a') s[i+1]='b';
                else s[i+1]='a';
                //cout<<s[i]<<endl;
            }
            else
            {
                if(s[i]=='a') s[i]='b';
                else s[i]='a';
            }
            cnt++;
        }

    }
    cout<<cnt<<endl;
    cout<<s<<endl;

    return 0;
}


