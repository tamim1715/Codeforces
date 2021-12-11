#include<iostream>
using namespace std;

int n,k;
int t[200009];
int possible(int mid, int p)
{
	int cnt=0;
	for(int i=0; i<n; i++)
	{
		if(!p) cnt++,p^=1;
		else
		{
			if(t[i]<=mid) {cnt++;
			p^=1;
			}
		}
	}
	if(cnt>=k) return 1;
	return 0;
}

int main()
{
	cin>>n>>k;
	for(int i=0; i<n; i++) cin>>t[i];
	int low=1,high=1000000000,mid;
	while(low<=high)
	{
		mid=(low+high)>>1;
		if(possible(mid, 0)||possible(mid,1))
		{
			high=mid-1;
		}
		else low=mid+1;
	}
	cout<<low<<endl;

	return 0;
}
