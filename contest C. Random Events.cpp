#include<iostream>
#include<cmath>
#include<cstring>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<iomanip>

using namespace std;

int main()
{
	int tst;
	cin>>tst;
	while(tst--)
	{
		int n,m;
		cin>>n>>m;
		int t[n];
		for(int i=0; i<n; i++) cin>>t[i];
		int j=n-1;
		while(j>=0&&t[j]==j+1) j--;
		//cout<<j<<endl;
		int a;
		double b,ans=0.0000000;
		bool flag=true;
		while(m--)
		{
			cin>>a>>b;
			a--;

			if(a>=j)
			{
				if(flag) ans=(1-b),flag=false;
				else ans*=(1-b);
				flag=false;
			}
		}
		if(j==-1) cout<<1<<endl;
		else if(!flag) cout<<fixed<<setprecision(8)<<1-ans<<endl;
		else cout<<ans<<endl;



	}








	return 0;

}
