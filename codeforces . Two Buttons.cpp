#include<iostream>
using namespace std;
int main()
{

	int n,m;
	cin>>n>>m;
	int cnt=0;
	if(n>=m)
	{
		cout<<n-m<<endl;
		return 0;
	}
	while(n<m)
    {
        cnt++;
        if(m%2) m++;
        else m/=2;
    }
    cout<<cnt+(n-m)<<endl;

   return 0;

}
