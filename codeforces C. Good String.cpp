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
        string s;
        cin>>s;
        int n=s.L;
        int t[15];
        memset(t, 0, sizeof(t));
        int mx=0,mx1=0,mx2=0;
        for(int i=0; i<n; i++)
        {
            int x=s[i]-48;
            t[x]++;
            mx=max(t[x], mx);
        }
        for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
            {
                bool flag=false;
                int cnt=0;
                for(int k=0; k<n; k++)
                {
                    int x=s[k]-48;
                    if(flag&&x==i)
                    {
                        cnt++;
                        flag=!flag;
                    }
                    else if(!flag&&x==j)
                    {
                        cnt++;
                        flag=!flag;
                    }

                }
                if(cnt%2) cnt--;
                //if(i==2&&j==5) cout<<cnt<<endl;
                //if(i==5&&j==2) cout<<cnt<<endl;
                mx=max(mx, cnt);
            }
        }
        cout<<n-mx<<endl;


    }


    return 0;
}
