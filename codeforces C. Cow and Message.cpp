#include<iostream>
#include<cstring>
using namespace std;
#define ll long long
ll t[50],value[50][50],p[50];

int main()
{
	string s;
	cin>>s;
	ll mx=0,cnt=0;
	ll n=s.length();
	for(int i=0; i<n; i++)
	{
		t[s[i]-'a']++;
		mx=max(mx, t[s[i]-'a']);
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<26; j++)
		{
			value[j][s[i]-'a']+=p[j];
		}
		p[s[i]-'a']++;
	}
	for(int i=0; i<26; i++)
	{
		for(int j=0; j<26; j++)
		{
			mx=max(mx, value[i][j]);
		}
	}
	cout<<mx<<endl;
	return 0;
}
