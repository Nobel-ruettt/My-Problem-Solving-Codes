#include <bits/stdc++.h>
using namespace std;

/***template***/

struct rr
{
    int l,r,id;
    rr(){}
    rr(int _l,int _r,int _id)
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
    int tes,n,cas,i,J,C;
    bool f;
    scanf("%d",&tes);
    for(cas=1;cas<=tes;cas++)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            int l,r;
            scanf("%d %d",&l,&r);
            ranges[i-1]=rr(l,r,i);
            ans[i]=0;
        }
        sort(ranges,ranges+n);
        f=0;
        J=-1;
        C=-1;
        for(i=0;i<n;i++)
        {
            int now_l=ranges[i].l;
            int now_r=ranges[i].r;
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
