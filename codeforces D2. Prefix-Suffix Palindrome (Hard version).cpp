
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


#define F  first
#define S  second

#define f(a,b) for(int i=a; i<b; i++)
#define fl(a,b) for(long long i=a; i<b; i++)

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;

#define INF 1e9
#define INFL 1e18
#define mod 1e9+7

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
int now,p[300000];
int prefix(string s)
{
    now=p[0]=-1;
    for(int i=1; i<s.L; i++)
    {
        while(now!=-1&&s[i]!=s[now+1]) now=p[now];
        if(s[i]==s[now+1]) p[i]=++now;
        else p[i]=now=-1;
    }
    return now;
}

int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    while(tst--)
    {
        memset(p, -1, sizeof(p));
        string s;
        cin>>s;
        string ans="";
        int l=s.L-1,i;
        string extra="";
        for(i=0; i<l; i++,l--)
        {


            if(s[i]==s[l]) ans+=s[i];
            else
            {
                for(int j=i; j<=l; j++) extra+=s[j];
                break;
            }
        }
        if(i==l)
        {
            cout<<s<<endl;
            continue;
        }
        //cout<<extra<<endl;
        string rev=extra;
        reverse(all(rev));
        string s1=extra+"#"+rev;
        string s2=rev+"#"+extra;
        //cout<<s1<<" "<<s2<<endl;
        int p1=prefix(s1);
        memset(p, -1, sizeof(p));
        int q=prefix(s2);
        string s3="";
        if(p1>=q&&p1!=-1) s3=extra.substr(0,p1+1);
        else if(q!=-1) s3=rev.substr(0,q+1);
        string s4=ans;
        reverse(all(s4));
        cout<<ans+s3+s4<<endl;

    }


    return 0;
}

