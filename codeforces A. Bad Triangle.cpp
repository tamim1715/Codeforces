#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst;
    cin>>tst;
    while(tst--)
    {
        int n;
        cin>>n;
        int t[n];
        for(int i=0; i<n; i++) cin>>t[i];

        if(t[0]+t[1]<=t[n-1])
        {

            cout<<1<<" "<<2<<" "<<n<<endl;

        }
        else cout<<-1<<endl;

    }
     return 0;
}

