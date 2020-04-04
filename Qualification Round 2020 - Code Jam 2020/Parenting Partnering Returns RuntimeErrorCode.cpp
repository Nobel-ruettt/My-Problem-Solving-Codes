#include <bits/stdc++.h>
using namespace std;
/***template***/
#define ll                   int
#define scl(n)               scanf("%d",&n)
/***template***/

struct rr
{
    ll l,r,id;
    rr(){}
    rr(ll _l,ll _r,ll _id)
    {
       l=_l;
       r=_r;
       id=_id;
    }
    bool operator<(const rr &p)const
    {
        if(p.l>l)return 1;
        if(p.l==l)
        {
            if(p.r<r)return 1;
        }
        return 0;
    }
}ranges[1100];
bool ans[1100];

int main()
{
    ll tes,n,l,r,J,C,now_l,now_r,i,cas;
    bool f;
    scl(tes);
    for(cas=1;cas<=tes;cas++)
    {
        scl(n);
        for(i=1;i<=n;i++)
        {
            scl(l);
            scl(r);
            ranges[i-1]=rr(l,r,i);
            ans[i]=0;
        }
        sort(ranges,ranges+n);
        f=0;
        J=-1;
        C=-1;
        for(i=0;i<n;i++)
        {
            now_l=ranges[i].l;
            now_r=ranges[i].r;
            if(now_l>=J)
            {
                ans[ranges[i].id]=0;
                J=now_r;
                continue;
            }
            if(now_l>=C)
            {
                ans[ranges[i].id]=1;
                C=now_r;
                continue;
            }
            f=1;
            break;
        }
        if(f)
        {
            printf("Case #%d: IMPOSSIBLE\n",cas);
            continue;
        }
        printf("Case #%d: ",cas);
        for(i=1;i<=n;i++)
        {
            if(ans[i]==0)printf("J");
            else printf("C");
        }
        printf("\n");
    }
    return 0;
}
