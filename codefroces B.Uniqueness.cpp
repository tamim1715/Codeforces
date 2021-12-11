#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<ll, ll>mp;
ll mn=100000000000;
int main()
{
	ll n;
	cin>>n;
	ll t[n];
	for(ll i=0; i<n; i++) cin>>t[i];

	for(ll i=0; i<n; i++)
    {
        ll j=n-1;
        for(; j>=i; j--)
        {
            //cout<<t[j]<<" "<<mp[t[j]]<<endl;
            if(mp[t[j]]) break;
            mp[t[j]]++;

        }
        //cout<<j<<endl;
        mn=min(mn, (j-i+1));
        //cout<<j<<" T "<<mn<<endl;
        for(j=j+1; j<n; j++) mp[t[j]]=0;

        if(mp[t[i]]) break;
        mp[t[i]]++;
    }
    cout<<mn<<endl;
	/*map<int, int>mp1,mp2;
	vector<int>v1,v2;
	int j=0,k=n-1,cnt1=0,cnt2=0,cnt=0;
	while(!mp1.count(t[j])&&j<n)
	{
		cnt1++;
		mp1[t[j]]++;

		v1.push_back(t[j]);
		j++;
	}
	while(!mp2.count(t[k])&&k>=0)
	{
		cnt2++;
		mp2[t[k]]++;
		v2.push_back(t[k]);
		k--;
	}
	//reverse(v2.begin(), v2.end());
	if(cnt1>cnt2)
	{
		for(int i=0; i<v2.size(); i++)
		{
			if(mp1[v2[i]]) break;
			cnt1++;
		}
		//cout<<n-cnt1<<endl;
	}
	else
	{
		for(int i=0; i<v1.size(); i++)
		{
			if(mp2[v1[i]]) break;
			cnt2++;
		}
		//cout<<n-cnt1<<endl;
	}
	cout<<min(n-cnt1, n-cnt2)<<endl;

   */
	return 0;

}


