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

string a,b;

bool ans=false;

void check(int i, int j, bool flag){
    if(j==b.length())
    {
        cout<<"tamim"<<endl;
        ans=true;
        return;
    }
    if(flag&&i+1<a.length()&&a[i+1]==b[j+1])
    {
        cout<<'a'<<" "<<i<<" "<<j<<endl;
        check(i+1, j+1, true);
        if(i-1<a.length()&&a[i-1]==b[j+1])
        {
            check(i-1, j+1, false);
        }

    }
    if(flag&&i+1<a.length()&&a[i+1]!=b[j+1])
    {
        cout<<'b'<<" "<<i<<" "<<j<<endl;
        if(i-1>=0&&a[i-1]==b[j+1])
        {
            check(i-1, j+1, false);
        }
    }
    if(flag&&i+1==a.length()&&i-1>=0&&a[i-1]==b[j+1])
    {
        cout<<'a'<<" "<<i<<" "<<j<<endl;
        check(i-1, j+1, false);
    }
    if(flag==false && i-1>=0&&a[i-1]==b[j+1])
    {
        cout<<'a'<<" "<<i<<" "<<j<<endl;
        check(i-1, j+1, false);
    }
}

int main()
{
   int tst;
   cin>>tst;
   while(tst--)
   {
       ans=false;
       cin>>a>>b;
       int cnt=0;
       for(int i=0; i<a.length(); i++){
           if(a[i]==b[0])
           {
               cnt=0;
               //check(i, 0, true);
               for(int j=i; j<a.length(); j++)
               {
                   if(cnt+1==b.length())
                   {
                       ans=true;
                       break;
                   }
                   if(j-1>=0&&a[j-1]==b[cnt+1]){
                       int cnt1=cnt+1;
                   for(int k=j-1; k>=0; k--)
                   {
                       if(cnt1<b.length()&&a[k]==b[cnt1]) cnt1++;
                       else break;
                   }
                   if(cnt1==b.length())
                   {
                       ans=true;
                       break;
                   }
                   }
                   if(a[j+1]==b[cnt+1])
                   {
                       cnt++;
                   }
                   else break;
               }
           }
       }
       if(ans) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       

   }
}