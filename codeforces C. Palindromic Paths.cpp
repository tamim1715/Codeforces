
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


#define F  first
#define S  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1e9+7

#define pi 3.14159265358979323846


int char_to_int(char c){int x=c-48; return x;}
char int_to_char(int x){int c=x+48; return c;}


void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); }

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};



int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n,m;
        cin>>n>>m;
        int t[n+5][m+5];
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++) cin>>t[i][j];
        }
        int cnt=0,cnt1,cnt2,r,s;
        int x=(n+m-1)/2;
        r=n,s=m;
        for(int i=1; i<=x; i++)
        {
            cnt1=cnt2=0;
            int p=1,q=i,p1=r,q1=s;
            if(q>m)
            {
                q=m;
                p+=(i-m);
            }
            while(p<=n&&q>=1)
            {
                //cout<<p<<" "<<q<<endl;
                if(t[p][q]==0) cnt1++;
                else cnt2++;
                p++;
                q--;
            }
            while(p1<=n&&q1>=1)
            {
                //cout<<p1<<" s "<<q1<<endl;
                if(t[p1][q1]==0) cnt1++;
                else cnt2++;
                p1++;
                q1--;
            }
            r--;
            if(r==0)
            {
                r=1;
                s--;
            }
            //cout<<cnt1<<" count "<<cnt2<<endl;
            cnt+=min(cnt1, cnt2);

        }
        cout<<cnt<<endl;
    }


    return 0;
}

