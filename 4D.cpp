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
       string a,b;
       cin>>a>>b;
       if(b.length()>a.length()){
           cout<<"NO"<<endl;
           continue;
       }
       bool flag=false;
       int check=a.length()-1,i;
       for(i=b.length()-1; i>=0; i--)
       {
           if(a[check--]==b[i]) continue;
           else break;
       }
       if(i==-1) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    //here//
    //    for(int i=0; i<a.length(); i++)
    //    {
    //        if(i+b.length()-1>=a.length()) break;
    //        string s=a.substr(i, b.length());
    //        int cnt=0,j;
    //        for(j=0; j<s.length(); j++)
    //        {
    //            if(s[j]==b[j]) continue;
    //            else break;
    //        }
    //        if(j==s.length())
    //        {
    //            flag=true;
    //            break;
    //        }
    //    }

   }
}