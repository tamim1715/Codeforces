#include<bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

vector<pair<ll, ll> >v;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        v.clear();
        int n;
        cin>>n;
        ll a,b;
        ll sum=0,ans=0;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            v.pb({a,i});
        }
        for(int i=0; i<n; i++)
        {
            cin>>b;
            v[i].second=b;
            sum+=b;
        }
        sort(v.begin(), v.end());
        ans=sum;
        for(int i=0; i<n; i++)
        {
            sum-=v[i].second;
            ans=min(ans, max(sum, v[i].first));
        }
        cout<<ans<<endl;

    }

}
