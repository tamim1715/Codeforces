
#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<map>
#include<vector>
#include<map>
#define pb push_back
using namespace std;
map<int, vector<int> >G;
vector<int>v;

int main()
{
	G.clear();
	int n;
	cin>>n;
	int t[n];
	int s[n];
	for(int i=0; i<n; i++) cin>>t[i];
	bool flag1=true;
	for(int i=0; i<n; i++)
	{
		if(t[i]!=i+1) {flag1=false; break;}
	}
	if(flag1)
	{
		cout<<0<<endl;
		return 0;
	}

	bool flag=false;
	int find=1;
	int cnt=0;
	flag1=true;
	for(int i=1; i<=n; i++)
	{


		v.clear();

		//cnt++;
		flag=!flag;
		int x;
		int j,k;
		if(flag)
		{
			x=n-1;
			if(t[i-1]==i)
			{
				flag=!flag;
				continue;
			}
			cnt++;


			for(j=0; j<n; j++)
			{
				//x++;
				if(t[j]==j+1)
				{
					G[cnt].pb(1);
					s[x--]=t[j];
					continue;
				}
				else {break;}
			}
			for(k=j; k<n; k++)
			{
					if(t[k]==j+1)
					{
						v.pb(t[k]);
						break;
					}
					else v.pb(t[k]);
			}
			if(v.size())
			{
				G[cnt].pb(v.size());
				reverse(v.begin(), v.end());
				for(int k1=0; k1<v.size(); k1++)
				{
					s[x--]=v[k1];
				}
			}
			v.clear();
			k++;
			for(; k<n; k++)
			{
				v.pb(t[k]);
			}

		     if(v.size())
			{
				G[cnt].pb(v.size());
				reverse(v.begin(), v.end());
				for(int k1=0; k1<v.size(); k1++)
				{
					s[x--]=v[k1];
				}
			}
			v.clear();
			for(int i=0; i<n; i++)
			{
				swap(t[i],s[i]);
			}
			//cout<<x<<endl;
			//for(int i=0; i<n; i++) cout<<t[i]<<endl;
	 	}
		else
		{
			x=0;
			if(t[n-i]==i)
			{
				flag=!flag;
				continue;
			}
			cnt++;



			for(j=n-1; j>=0; j--)
			{
				//x++;
				if(t[j]==n-j)
				{
					G[cnt].pb(1);
					s[x++]=t[j];
					continue;
				}
				else break;
			}
			for(k=j; k>=0; k--)
			{
					if(t[k]==n-j)
					{
						v.pb(t[k]);
						break;
					}
					else v.pb(t[k]);
			}
			if(v.size())
			{
				G[cnt].pb(v.size());
				reverse(v.begin(), v.end());
				for(int k1=0; k1<v.size(); k1++)
				{
					s[x++]=v[k1];
				}
			}
			k--;
			v.clear();
			for(; k>=0; k--)
			{
				v.pb(t[k]);
			}

		     if(v.size())
			{
				G[cnt].pb(v.size());
				reverse(v.begin(), v.end());
				for(int k1=0; k1<v.size(); k1++)
				{
					s[x++]=v[k1];
				}
			}
			v.clear();
			for(int i=0; i<n; i++)
			{
				swap(t[i],s[i]);
			}
			reverse(G[cnt].begin(), G[cnt].end());
		}



	}
	if(flag)
	{
		cnt++;
		for(int i=0; i<n; i++)
		{
			G[cnt].pb(1);
		}
	}
	int check=cnt;
	for(int i=0; i<cnt; i++) if(G[i].size()==1) check--;
	cout<<check<<endl;
	for(int i=1 ; i<=cnt; i++)
	{
	    if(G[i].size()==1) continue;
		cout<<G[i].size();
		for(int j=0; j<G[i].size(); j++)
		{
			cout<<" "<<G[i][j];
		}
		cout<<endl;
	}



	return 0;
}
