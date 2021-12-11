
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



int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();
    int tst;
    cin>>tst;
    while(tst--)
    {
        mp.clear();
        int cnt=0;
        int n;
        cin>>n;
        int t[n];
        for(int i=0; i<n; i++)
        {
            cin>>t[i];
            mp[t[i]]++;
            if(mp[t[i]]==1) cnt++;

        }
        int first=0,last=n-1,i;
        string s="";
        for(i=1; i<=n; i++)
        {
            if(mp[i]) s+='1';
            else
            {
                s+='0';
                break;
            }
            if(mp[i]>1) break;
            if(t[first]==i)
            {
                first++;
            }
            else if(t[last]==i)
            {
                last--;
            }
            else break;

        }
        i++;
        while(i<=n)
        {
            s+='0';
            i++;
        }
        reverse(all(s));
        if(cnt==n) s[0]='1';
        cout<<s<<endl;

    }


    return 0;
}

