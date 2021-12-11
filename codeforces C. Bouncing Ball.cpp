#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[200000];
int main()
{

	int tst;
	cin>>tst;
	while(tst--)
	{
		ll n,m,k,x,y,ans=0LL;
		cin>>n>>m>>k;
		string s;
		cin>>s;

		cin>>x>>y;
		memset(dp, 0, sizeof(dp));


		for(int i=n-1; i>=0;  i--)
		{
			if(i+k>=n)
			{
				dp[i]=(i*y);
				if(s[i]=='0') dp[i]+=x;
				ans=dp[i];
				continue;
			}
			dp[i]=dp[i+k];
			if(s[i]=='0') dp[i]+=x;
			dp[i]-=(k*y);

		}


		for(int i=m-1; i<n; i++)
		{
			if(i==m-1) ans=dp[i]-((m-1)*y);
			else ans=min(ans, dp[i]-((m-1)*y));
			//cout<<ans<<" "<<dp[i]<<" "<<(m-1)*y<<endl;
		}

		cout<<ans<<endl;
	}


	return 0;

}
