/* SHAHADATH HOSSAIN TAMIM
   BANGLADESH UNIVERSITY OF BUSINESS AND TECHNOLOGY
*/

#include<iostream>
#include<map>

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
#define INFL 1e18
#define mod 1e9+7

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<ll, ll>mp,mpi;
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    ll tst;
    cin>>tst;
    while(tst--)
    {
        mp.clear();
        mpi.clear();
        ll n,s;
        cin>>n>>s;
        ll t[n+5];
        fl(1,n+1) cin>>t[i];
        ll p=0LL;
        fl(1, n+1)
        {

            if(t[i]>t[i-1]&&t[i]>t[i+1]&&i+1<=n&&i-1>=1)
            {

                    p++;
                    mpi[i]=1;

            }
            mp[i]=p;
        }
       /*for(int i=1; i<=n; i++) cout<<mpi[i]<<" ";
        cout<<endl;
        for(int i=1; i<=n; i++) cout<<mp[i]<<" ";
        cout<<endl;*/
        int j=mp[n];
        int dis[n+5];
        int x=0;
        for(int i=n; i>=1; i--)
        {
            if(mpi[i])
            {
                dis[i]=0;
                x=0;
            }
            x++;
            dis[i]=x;
        }
        //cout<<"pic "<<p<<" "<<n-s+1<<" "<<s<<endl;
        ll y=0,q=0,a,b;
        for(int i=1; i<=n-s+1; i++)
        {
            x=mp[i+s-1]-mp[i];
            //cout<<t[i]<<" "<<t[i+s-1]<<endl;
            //cout<<" part "<<x<<endl;
            //if(mpi[t[i]) x++;
            if(mpi[i+s-1]) x--;
            if(x+1==y&&dis[i]+2<q+2)
            {
                y=x+1;
                q=dis[i];
            }
            else if(x+1>y)
            {
                //cout<<" ans "<<x+1<<" "<<i<<endl;
                y=x+1;
                q=i;

            }

        }

        cout<<y<<" "<<q<<endl;

    }


    return 0;
}

