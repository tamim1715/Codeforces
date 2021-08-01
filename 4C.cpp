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
       string s;
       cin>>s;
       int a=0,b=0,a1=0,b1=0,i;
       for(i=0; i<s.length(); i++)
       {
           if(i%2)
           {
               if(s[i]=='1') a++;
               else if(s[i]=='?') a1++;
           }
           else
           {
               if(s[i]=='1') b++;
               else if(s[i]=='?') b1++;

           }
           int x=9-i;
           int y=x/2;
           if(x%2) x++;
           x/=2;
           if(b+b1>a+x) break;
           if(a+a1>b+y) break;
       }
       if(i==s.length()) cout<<10<<endl;
       else cout<<i+1<<endl;
       

   }
}