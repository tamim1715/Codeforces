
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
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};



int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    ll aa,bb,cc;
    cin>>aa>>bb>>cc;
    ll r[aa],b[cc],g[bb];
    f(0,aa) cin>>r[i];
    f(0,bb) cin>>g[i];
    f(0,cc) cin>>b[i];
    sort(r, r+aa);
    sort(g, g+bb);
    sort(b, b+cc);
    ll t[aa+1][bb+1][cc+1]={};
    for(int i=0; i<=aa; i++)
    {
        for(int j=0; j<=bb; j++)
        {
            for(int k=0; k<=cc; k++)
            {
               if(i&&j) t[i][j][k]=max(t[i][j][k], t[i-1][j-1][k]+r[i-1]*g[j-1]);
                if(i&&k) t[i][j][k]=max(t[i][j][k], t[i-1][j][k-1]+ r[i-1]*b[k-1]);
                if(j&&k) t[i][j][k]=max(t[i][j][k], t[i][j-1][k-1]+b[k-1]*g[j-1]);
                //cout<<i<<" "<<j<<" "<<k<<" "<<t[i][j][k]<<endl;

            }
            //cout<<endl;
        }
        //cout<<endl;
    }
    cout<<t[aa][bb][cc]<<endl;

    return 0;
}

