
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
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        vector<string>s;
        string a,b;
        cin>>a>>b;
        s.pb(a);
        s.pb(b);
        //cout<<s[0]<<" "<<s[1]<<endl;
        bool flag=true;
        int x=0,i;
        for(i=0; i<n; i++)
        {

            if(s[x][i]>'2')
            {
                //if(flag)
                //cout<<s[x][i]<<endl;
                x=1-x;
                if(s[x][i]<'3')
                {
                    flag=false;
                    break;
                }
            }
            //cout<<x<<endl;
        }

        if(x&&flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

