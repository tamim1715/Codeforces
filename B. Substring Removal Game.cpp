#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        string s;
        v.clear();
        cin>>s;
        int cnt=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='1') cnt++;
            else
            {
                if(cnt) v.push_back(cnt);
                cnt=0;
            }
        }
        if(cnt) v.push_back(cnt);
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int ans=0;
        for(int i=0; i<v.size(); i+=2) ans+=v[i];
        cout<<ans<<endl;


    }
     return 0;
}

