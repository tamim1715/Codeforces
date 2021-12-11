
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

int check(int n)
{
    cout<<"? "<<n<<endl;
    cout.flush();
    int x;
    cin>>x;
    return x;


}


int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    int n;
    cin>>n;
    /*if(n<100)
    {
        for(int i=1; i<=n; i++)
        {
            int x=check(i);
            //cout<<x<<endl;
            if(x==1)
            {
                cout<<"! "<<i<<endl;
                return 0;
            }
        }
    }*/
    int a=check(1);
    int b=check(2);
    int c=check(n);

    if(a<b)
    {
        cout<<"! "<<1<<endl;
        return 0;
    }
    if(c==1)
    {
        cout<<"! "<<n<<endl;
        return 0;
    }

    int low=1,high=n-2,mid,ans=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        int val1=check(mid);
        int val2=check(mid+1);
        int val3=check(mid+2);
        if(val2<val1&&val2<val3)
        {
            ans=mid+1;
            break;
        }
        if(val2>val1) high=mid-1;
        else if(val2>val3) low=mid+1;

    }
    cout<<"! "<<ans<<endl;


    return 0;
}

