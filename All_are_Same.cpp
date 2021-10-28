#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<set>
#include<queue>
#include<cstring>

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

map<char, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b, a%b);

}



int main()
{
    // freopen("tamim.txt", "w", stdout);
    // freopen("tamim1.txt", "r", stdin);
    fast();
    int tst;
    cin>>tst;
    while(tst--) 
    {
        int n;
        cin>>n;

        ll t[n];
        for(int i=0; i<n; i++) cin>>t[i];
        ll mn=t[0];
        int cnt=0;
        for(int i=0; i<n; i++){
            mn=min(mn, t[i]);
            if(t[i]==t[0]) cnt++;
            
        }
        if(cnt==n){
            cout<<-1<<endl;
            continue;
        }
        ll val=0;
        for(int i=0; i<n; i++){
            // if(t[i]==mn) continue;
            // if(val==0) val=t[i]-mn;
            // else
            // {
            val=gcd(val, t[i]-mn);
            // }
        }
        cout<<val<<endl;

    }
    return 0;
}

