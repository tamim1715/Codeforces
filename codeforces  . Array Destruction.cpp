/* SHAHADATH HOSSAIN TAMIM
   BANGLADESH UNIVERSITY OF BUSINESS AND TECHNOLOGY
*/

#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define pb push_back
#define pob pop_back

#define gcd __gcd
#define lcm(a,b) (a*b)/__gcd(a,b)

#define L length()


#define all(a) a.begin(), a.end()
#define CLR(a)  memset(a,0,sizeof(a))

#define pii pair<int, int>
#define F  first
#define S  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1000000007

#define pi 3.14159265358979323846


int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}



void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<int, int>mp;
vector<pii>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};



int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    while(tst--)
    {

        v.clear();
        mp.clear();

        int n;
        cin>>n;
        bool flag=true;
        n*=2;
        int t[n+11],vis[n+11];

        for(int i=0; i<n; i++) cin>>t[i], mp[t[i]]++;

        sort(t, n+t);
        CLR(vis);

        int check=t[n-1],pev=0,ind=n-1;
        mp[t[n-1]]--;
        vis[n-1]=1;

        while(check!=pev)
        {
             bool  flag1=false;
            for(int i=ind-1; i>=0; i--)
            {
                if(vis) continue;
                if(check-t[i]>0&&mp[check-t[i]]>0)
                {
                    pev=check;
                    check=t[i];
                    ind=i;
                    mp[t[n-1]]--;
                    mp[check-t[i]]--;
                    vis[i]=1;
                    for(int j=0; j<=n; j++)
                    {
                        if(t[j]==check-t[i])
                        {
                            vis[j]=1;
                            v.pb({t[i], t[j]});
                            break;
                        }
                    }
                    flag1=true;
                    break;
                }
            }
            if(!flag1)
            {
                flag=false;
                break;
            }
        }
        int cnt=0,dor=0;
        for(int i=0; i<n; i++)
        {
            if(vis[i]==0)
            {
                dor=t[i];
                cnt++;
            }
        }
        if(!flag||cnt!=1)
        {
            no;
            continue;
        }
        yes;
        cout<<t[n-1]+dor<<endl;
        cout<<t[n-1]<<" "<<dor<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<v[i].F<<" "<<v[i].S<<endl;
        }
    }


    return 0;
}

 
