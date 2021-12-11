
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

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int n;
    cin>>n;
    int cnt=0;
    int t[n+5];
    int mx=0,ind=0;
    f(1,n+1){
    cin>>t[i];
    }
    int mn=INF,sum=0,x;
    f(1,n+1)
    {
        sum=0;
        for(int j=1; j<=n; j++)
        {
            x=abs(i-j)*2;
            x+=(j-1)*2+(i-1)*2;
            x=(t[j]*x);
            sum+=x;
        }
        if(sum<mn) mn=sum;
    }
    cout<<mn<<endl;


    return 0;
}

