
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

string s1="abacaba";

int check(string s)
{
    int cnt=0;
    for(int i=0; i<=s.L-7; i++)
    {
        string s2=s.substr(i, 7);
        int j;
        for(j=0; j<7; j++)
        {
            if(s2[j]==s1[j]) continue;
            else break;
        }
        if(j==7) cnt++;
    }
    return cnt;
}


int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int p=check(s);
        if(p>1){no; continue;}
        else if(p==1){
            yes;
            for(int i=0; i<s.L; i++)
            {
                if(s[i]=='?') cout<<'d';
                else cout<<s[i];
            }
            cout<<endl;
            continue;
        }
        bool flag=false;
        string ans="";
        for(int i=0; i<=s.L-7; i++)
        {
            if(s[i]=='a'||s[i]=='?')
            {

                int j;
                string p=s;
                for(j=i; j<i+7; j++)
                {
                    if(s[j]==s1[j-i]) continue;
                    else if(s[j]=='?') s[j]=s1[j-i];
                    else break;
                }
                if(j==i+7)
                {
                    int x=check(s);
                    if(x==1)
                    {
                        flag=true;
                        ans=s;
                        break;
                    }
                }
                s=p;
                if(flag) break;
            }

        }
        if(flag)
        {
            yes;
            for(int i=0; i<ans.L; i++)
            {
                if(ans[i]=='?') cout<<'d';
                else cout<<ans[i];
            }
            cout<<endl;
        }
        else {no;}


    }


    return 0;
}

