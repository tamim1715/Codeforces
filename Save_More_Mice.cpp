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




int main()
{
    // freopen("tamim.txt", "w", stdout);
    // freopen("tamim1.txt", "r", stdin);
    fast();
    int tst;
    cin>>tst;
    while(tst--) 
    {
        int n,k;
        cin>>n>>k;
        int t[k];
        for(int i=0; i<k; i++) cin>>t[i];
        sort(t, t+k);
        int ans=0,m=0,c=0;
        for(int i=k-1; i>=0; i--){
            if(t[i]>m) ans++;
            else break;
            m+=(n-t[i]);
            // cout<<m<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}

