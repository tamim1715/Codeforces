
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

struct node{
   int roll;
   node *next;
};
int n,x;
int t[505];

int is_sort()
{
    for(int i=0; i<n-1; i++)
    {
        if(t[i]>t[i+1]) return 0;
    }
    return 1;
}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    while(tst--)
    {
        cin>>n>>x;
        for(int i=0; i<n; i++) cin>>t[i];
        int cnt=0;
        while(!is_sort())
        {
            bool flag=true;
            for(int i=0; i<n; i++)
            {
                if(t[i]>x)
                {
                    cnt++;
                    swap(t[i], x);
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                cnt=-1;
                break;
            }


        }
        cout<<cnt<<endl;
    }


    return 0;
}

