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
        string s;
        cin>>s;
        int n=s.length();
        if(s[n-1]=='0'&&s[n-2]=='0'){
             cout<<0<<endl;
             continue;
        }
        if((s[n-1]=='5'&&(s[n-2]=='2'||s[n-2]=='7'))||(s[n-1]=='0'&&s[n-2]=='5')){
             cout<<0<<endl;
             continue;
        }
        int mn=999999;
        for(int i=0; i<n; i++){
            if(s[i]=='0'||s[i]=='5'){
                for(int j=i+1; j<n; j++){
                    if(s[j]=='0'){
                        mn=min(mn, (j-i-1)+(n-j-1));
                    }
                }
            }
             if(s[i]=='2'||s[i]=='7'){
                for(int j=i+1; j<n; j++){
                    if(s[j]=='5'){
                        mn=min(mn, (j-i-1)+(n-j-1));
                    }
                }
            }

        }
        cout<<mn<<endl;
    }
    return 0;
}

