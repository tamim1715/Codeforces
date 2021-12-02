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

map<int, int>mp;
vector<int>v;
map<int, vector<int> >G;
map<int, int>visited;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

struct node{
   int roll;
   node *next;
};

int t[1000002];
int l[200002];
int r[200002];
int val=1000001;

void seive(){
    t[0]=1;
    t[1]=1;
    for(int i=4; i<=val; i+=2){
        t[i]=1;
    }
    for(int i=3; i<=val; i+=2){
        if(!t[i]){
            int p=sqrt(val+2);
            if(i<p){
                for(int j=i*i; j<=val; j+=i*2) t[j]=1;
            }
        }
    }
}



int main()
{
    // freopen("tamim.txt", "w", stdout);
    // freopen("tamim1.txt", "r", stdin);
    fast();
    seive();
    int tst;
    cin>>tst;
    while(tst--) 
    {
        int n,e;
        CLR(l);
        CLR(r);
        cin>>n>>e;
        int v[n+2];
        for(int i=1; i<=n; i++){
            cin>>v[i];
        }
        ll ans=0LL;
        for(int i=1; i<=n; i++){
            
            if(!t[v[i]]){
                if(i+e<=n){

                  r[i+e]+=1;
                  r[i+e]+=l[i];
                }
                ans+=l[i];
                
            }
            if(v[i]==1){
                ans+=r[i];
                if(r[i]&&i+e<=n){
                    r[i+e]=r[i];
                    //r[i+e]+=r[i];
                }
                if(i+e<=n){
                l[i+e]+=l[i];
                l[i+e]++;
                }
            }

        }
        cout<<ans<<endl;
        

    }
    return 0;
}

