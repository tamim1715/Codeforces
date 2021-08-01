#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
#include<map>
#include<cmath>
#include<string>
#include<iomanip>
#include<set>
#include<queue>
#include<stack>

#define ll long long
#define pb push_back

using namespace std;

vector<int> v,v1;

int main()
{
   int tst;
   cin>>tst;
   while(tst--)
   {
       
       ll n;
       cin>>n;
       ll ans=n/10LL;
       if(n%10LL==9LL) ans++;
       cout<<ans<<endl;


   }
}