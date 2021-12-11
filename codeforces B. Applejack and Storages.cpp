
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
map<int, int>::iterator it;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};



int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    mp.clear();
    int n,a;
    cin>>n;
    int x=0,y=0;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        mp[a]++;
    }
    for(it=mp.begin(); it!=mp.end(); it++)
    {
        x+=(it->S)/4;
        if(it->S%4>=2) y++;
    }
    int p,q;
    cin>>p;
    char ch;
    while(p--)
    {
        cin>>ch>>q;
        if(ch=='+')
        {
            mp[q]++;
            if(mp[q]%4==0) x++,y--;
            else if(mp[q]%4==2) y++;
        }
        else
        {
            mp[q]--;
            if(mp[q]%4==3) x--,y++;
            else if(mp[q]%4==1) y--;
        }
        if(x>=2||(x>=1&&y>=2))
        {
            yes;
        }
        else{
            no;
        }

    }

    return 0;
}

