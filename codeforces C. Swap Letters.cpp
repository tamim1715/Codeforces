
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

#define L s.length()
//#define and &&
//#define or ||

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

void fast() {ios_base::sync_with_stdio(false); cin.tie(NULL);}

map<int, int>mp;
vector<pair<int, int> >v;
deque<int>q1,q2;
int main()
{
    //freopen("tamim.txt", "w", stdout);
    fast();

    int n,a,b,c,d;
    string s1,s2;
    cin>>n>>s1>>s2;
    for(int i=0; i<n; i++)
    {
        if(s1[i]=='a'&&s2[i]=='b') q1.pb(i);
        else if(s2[i]=='a'&&s1[i]=='b') q2.pb(i);
    }
    while(q1.size()>=2)
    {
        a=q1.front();
        q1.pop_front();
        b=q1.front();
        q1.pop_front();
        v.pb({a,b});
    }
     while(q2.size()>=2)
    {
        a=q2.front();
        q2.pop_front();
        b=q2.front();
        q2.pop_front();
        v.pb({a,b});
    }
     while(q1.size() and q2.size())
    {
        a=q1.front();
        q1.pop_front();
        b=q2.front();
        q2.pop_front();
        v.pb({a,a});
        v.pb({a,b});
    }
    if(q1.size() or  q2.size())
    {
        cout<<-1<<endl;
    }
    else
    {
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i].F+1<<" "<<v[i].S+1<<endl;
        }
    }
    return 0;
}

