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
//#define l s.length()
#define sts st.size()
#define mpss mps.size()
#define mpis mpi.size()
#define vs v.size()
#define s(a) sort(a.begin(), a.end())
#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<ll, ll>mpi,mp;
map<string, int>mps;
map<int, vector<int> > path;
map<int, int>visited;
set<ll>s1,s2,s3,s4;
vector<ll>v,v1,v2,v3;
map<int, int>::iterator iti;
map<string, int>::iterator its;
set<ll>:: iterator sit;
vector<ll>::iterator itv;

void fresh() { mpi.clear(); mp.clear(); s1.clear(); s2.clear(); s3.clear(); s4.clear(); mps.clear();  v.clear(); v1.clear(); v2.clear(); v3.clear(); path.clear(); visited.clear(); }

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    ll tst;
    cin>>tst;
    while(tst--)
    {
        fresh();
        ll n;
        cin>>n;
        ll t[n];
        bool flag=false;
        bool k=false,q=false;
        bool flag1=false, flag2=false;
        ll sum1=0LL,sum2=0LL,sum3=0LL,sum4=0LL;
        for(ll i=0LL; i<n; i++)
        {
            cin>>t[i];
            if(!mpi.count(t[i])&&!k)  mpi[t[i]]++,v.pb(t[i]),sum1+=t[i],s1.insert(t[i]);
            else{

                mpi[t[i]]++;
                v1.pb(t[i]);
                s2.insert(t[i]);
                sum2+=t[i];
                if(mpi[t[i]]>2)
                {
                    flag=true;
                }
                k=true;
            }
            //cout<<t[i]<<"  "<<mpi[t[i]]<<endl;
        }
        ll b=v1.size();
        if(flag||!vs||!b)
        {
            cout<<0<<endl;
            continue;
        }
        for(ll i=n-1; i>=0LL; i--)
        {
            if(!mp.count(t[i])&&!q) mp[t[i]]++,v2.pb(t[i]),sum3+=t[i],s3.insert(t[i]);
            else{

                sum4+=t[i];
                mp[t[i]]++;
                v3.pb(t[i]);
                q=true;
                s4.insert(t[i]);
            }
        }
        //cout<<s1.size()<<" "<<s2.size()<<endl;
        ll x=v2.size();
        ll y=v3.size();
        if((s1.size()*(s1.size()+1))/2==sum1&&(s2.size()*(s2.size()+1))/2==sum2) flag1=true;
        if((s3.size()*(s3.size()+1))/2==sum3&&(s4.size()*(s4.size()+1))/2==sum4) flag2=true;
        if(s1.size()!=vs||s2.size()!=b) flag1=false;
        if(s3.size()!=x||s4.size()!=y) flag2=false;
       /* if(flag1&&flag2)
        {
            reverse(v2.begin(), v2.end());
            reverse(v3.begin(), v3.end());
            for(int i=0; i<v2.size(); i++) v3.pb(v2[i]);
            for(int i=0; i<n; i++)
            {
                if(t[i]!=v3[i]) {flag2=false; break;}
            }
        }*/
        if(flag1&&flag2&&s1.size()!=s4.size()&&s2.size()!=s3.size())
        {
            cout<<2<<endl;
            cout<<s1.size()<<" "<<s2.size()<<endl;
            cout<<s4.size()<<" "<<s3.size()<<endl;
        }

        else if(flag1) cout<<1<<endl, cout<<s1.size()<<" "<<s2.size()<<endl;
        else if(flag2) cout<<1<<endl,  cout<<s4.size()<<" "<<s3.size()<<endl;
        else cout<<0<<endl;
    }

    return 0;
}

