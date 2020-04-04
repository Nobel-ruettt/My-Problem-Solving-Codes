#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 1e15

int main()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans=inf;
    for(ll i=0;i<=100;i++)
    {
        ll leftt= b+i*a;
        for(ll j=0;j<=100;j++)
        {
            ll rightt= d+j*c;
            if(leftt==rightt)
            {
                ans=min(ans,leftt);
            }
        }
    }
    if(ans==inf)ans=-1;
    cout<<ans<<endl;
    return 0;
}
