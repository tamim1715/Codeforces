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
vector<int>v1,v2;
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
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;

        v1.clear();
        v2.clear();
        //cout<<v1.back()<<" "<<v2.back()<<endl;
        int n;
        cin>>n;
        int t[n];
        for(int i=0; i<n; i++) cin>>t[i];

        int x=1;
        v1.pb(0),v2.pb(0);


        for(int i=0; i<n; i++)
        {
            if(t[i]!=v1.back()&&t[i]!=v2.back())
            {
                if(i+1<n&&t[i+1]==v1.back())
                {
                    v1.pb(t[i]);
                }
                else  v2.pb(t[i]);
            }
            else if(v1.back()!=t[i]) v1.pb(t[i]);
            else if(v2.back()!=t[i]) v2.pb(t[i]);
        }

        cout<<v1.size()+v2.size()-2<<endl;




    return 0;
}
