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




int main()
{
    // freopen("tamim.txt", "w", stdout);
    // freopen("tamim1.txt", "r", stdin);
    fast();
    int n,m,cnt=0,indx;
    char c;
    string s;
    cin>>n>>m>>s;
    for(int i=0; i<n-2; i++){
        if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='c') cnt++;
    }
    for(int i=0; i<m; i++)
    {
        cin>>indx>>c;
        if(s[indx-1]==c)
        {
            cout<<cnt<<endl;
            continue;
        }
        int cnt1=0,cnt2=0;
        for(int j=max(0, indx-3); j<indx; j++){
            if(j+1<n&&j+2<n&&s[j]=='a'&&s[j+1]=='b'&&s[j+2]=='c') cnt1++;
        }
        s[indx-1]=c;
        // cout<<s<<" "<<c<<endl;
        for(int j=max(0, indx-3); j<indx; j++){
            if(j+1<n&&j+2<n&&s[j]=='a'&&s[j+1]=='b'&&s[j+2]=='c') cnt2++;
        }
        // cout<<cnt<<" "<<cnt1<<" "<<cnt2<<endl;
        cnt-=(cnt1-cnt2);
        cout<<cnt<<endl;
    }
    
    return 0;
}

