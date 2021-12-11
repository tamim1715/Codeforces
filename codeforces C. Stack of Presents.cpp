
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
        mpi.clear();
        int n,m;
        ll cnt=0,mx=0;
        cin>>n>>m;
        int t[n];
        //map<int, int>mp;
        ll del=0;
        f(0,n)
        {
            cin>>t[i];
            mpi[t[i]]=i+1;
        }
        int a;
        f(0,m)
        {
            cin>>a;
            //cout<<mpi
            if(mpi[a]<mx)
            {
                cnt++;
                del++;
                continue;
            }
            cnt+=mpi[a]-del;
            cnt+=(mpi[a]-1)-del;
            mx=mpi[a];
            del++;

        }
        /*f(0,m)
        {
            cin>>a;
            if(mpi.count(a))
            {
                cnt++;
                del++;
                continue;
            }
            f(0,n)
            {
                if(mp.count(t[i]))
                {
                    continue;
                }
                mpi[t[i]]++;
                cnt++;
                if(a==t[i])
                {
                    cnt+=i-del;
                   mp[a]++;
                   del++;

                    break;
                }
            }
        }*/
        cout<<cnt<<endl;
    }
    return 0;
}
