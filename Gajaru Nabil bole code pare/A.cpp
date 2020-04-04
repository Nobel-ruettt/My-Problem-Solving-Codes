#include <bits/stdc++.h>
using namespace std;
/***template***/
#define ll                   long long
#define LL                   long long
#define dd                   double
#define scl(n)               scanf("%lld",&n)
#define sl(n)                scanf("%lld",&n)
#define scd(n)               scanf("%lf",&n)
#define pi                   pair<ll,ll>
#define pll                  pair<ll,ll>
#define pb                   push_back
#define mp                   make_pair
#define uu                   first
#define vv                   second
#define fr                   first
#define sc                   second
#define FOR(i,n)             for(ll i=1;i<=n;i++)
#define LOOP(i,n)            for(ll i=0;i<n;i++)
#define FOOR(i,a,b)          for(ll i=a;i<=b;i++)
#define LOP(i,a,b)           for(ll i=a;i<b;i++)
#define sorted(s)            sort(s.begin(),s.end())
#define sortedd(s)           sort(s.begin(),s.end(),cmp)
#define reversed(s)          reverse(s.begin(),s.end())
#define contains(a,b)        (find((a).begin(), (a).end(), (b)) != (a).end())
#define MAXN                 100005
#define pii                  3.1415926536
#define mod                  1000000007
#define eps                  0.0000000001
#define inf                  9000000000000000
#define INF                  (1LL<<62)
#define mstt(a,b)            memset((a),(b),sizeof (a))
#define sz(x)                (ll)x.size()
#define mx                    92681+10
struct node
{
    ll nod,d;
    node(ll a,ll b)
    {
        nod=a;
        d=b;
    }
    bool operator<(const node &p)const
    {
        return p.d<d;
    }
};
ll Set(ll n,ll pos)
{
    return n=n|(1LL<<pos);
}
ll reset(ll n,ll pos)
{
    return n=n&~(1LL<<pos);
}
bool check(ll n,ll pos)
{
    return (bool)(n&(1LL<<pos));
}
ll power(ll x,ll y)
{
    ll res = 1;
    x = x;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x);
        y = y>>1;
        x = (x*x);
    }
    return res;
}
/***template***/
string s,t;
vector<pll>s1,t1;
int main()
{
    ll tes;
    scl(tes);
    FOR(cas,tes)
    {

        cin>>s>>t;
        s1.clear();
        t1.clear();
        s1.push_back(pll(s[0]-'a',1));
        for(ll i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                s1[s1.size()-1].vv++;
            }
            else
            {
                s1.push_back(pll(s[i]-'a',1));
            }
        }
        t1.push_back(pll(t[0]-'a',1));
        for(ll i=1;i<t.size();i++)
        {
            if(t[i]==t[i-1])
            {
                t1[t1.size()-1].vv++;
            }
            else
            {
                t1.push_back(pll(t[i]-'a',1));
            }
        }

        if(s1.size()!=t1.size())
        {
            cout<<"NO"<<endl;
            continue;
        }

        bool f=0;

        LOOP(i,s1.size())
        {
            if(s1[i].uu != t1[i].uu)
            {
                f=1;
                break;
            }
            if(s1[i].vv>t1[i].vv)
            {
                f=1;
                break;
            }
        }
        if(f)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
