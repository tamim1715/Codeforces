
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
    int tst;
    cin>>tst;
    while(tst--)
    {
        ll l,r,m;
        cin>>l>>r>>m;
        ll a=0LL,b=0LL,c=0LL;
        //bool flag=false;
        for(a=l; a<=r; a++)
        {

           ll x=m%a;
           if(m/a==0) x=a-m;
           ll y=((m/a)+1)*a-m;

           if(x<=y)
           {
               if(m/a==0&&r-x>=l)
               {
                   b=r-x;
                   c=r;
                   break;
               }

               else if(l+x<=r)
               {
                   b=l+x;
                   c=l;
                   break;
               }

           }
           else
           {
               if(r-y>=l)
               {
                   b=r-y;
                   c=r;
                   break;
               }
           }
        }
        cout<<a<<" "<<b<<" "<<c<<endl;

    }


    return 0;
}

