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
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

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
    ll tst;
    cin>>tst;
    while(tst--)
    {
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        if(s%n==0&&s/n<=a) yes;

        else if(b==s) yes;
        else
        {
            ll p=s/n;
            p=min(p, a)*n;
            p+=b;
            if(p>=s) yes;
            else no;
        }
        //if((s/n<=a&&s%n<=b)||(s) cout<<"YES"<<endl;


    }
    return 0;
}

