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

ll tes,n,arr[110][110];
map<ll,ll>ase;
int main()
{
    scl(tes);
    FOR(cas,tes)
    {
        scl(n);
        ll sum=0;
        ll rep_row=0;
        FOR(i,n)
        {
            ase.clear();
            bool f=0;
            FOR(j,n)
            {
                scl(arr[i][j]);
                if(ase[arr[i][j]])
                {
                    f=1;
                }
                ase[arr[i][j]]=1;
            }
            if(f)rep_row++;
            sum+=arr[i][i];
        }
        ll rep_col=0;
        FOR(j,n)
        {
            ase.clear();
            bool f=0;
            FOR(i,n)
            {
                if(ase[arr[i][j]]==1)
                {
                    f=1;
                }
                ase[arr[i][j]]=1;
            }
            if(f)rep_col++;
        }

        printf("Case #%lld: %lld %lld %lld\n",cas,sum,rep_row,rep_col);
    }
    return 0;
}

