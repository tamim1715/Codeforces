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
        int n;
        cin>>n;
        int t[n+5];
        f(1,n+1) cin>>t[i];
        int x=0,cnt=n-1,p,del=0;
        bool flag=false;
        f(1,n+1)
        {
            //x++;
            //del++;
            x=i;
            //cout<<x<<endl;
            f(1,n+1)
            {
                if(t[i]==x&&t[i-1]>t[i]&&mpi[i-1]==0&&i-1>0)
                {
                    //cout<<x<<endl;
                    //cout<<t[i-1]<<" "<<t[i]<<endl;

                    swap(t[i-1], t[i]);
                    mpi[i-1]++;


                    i-=2;

                    //break;
                }
                if(t[i]==x) break;
            }
            //cout<<x<<" "<<p<<endl;
            /*for(int j=p; j>=del&&cnt; j--)
            {
                //cout<<t[j]<<" "<<t[j-1]<<endl;
                if(t[j]>t[j-1]) break;
                swap(t[j], t[j-1]);
                cnt--;
                if(cnt==0)
                {
                    flag=true;
                    break;
                }
            }


            if(flag) break;*/
        }
        //cout<<t[0];
        f(1,n+1) cout<<t[i]<<" ";
        cout<<endl;
    }
    return 0;
}

