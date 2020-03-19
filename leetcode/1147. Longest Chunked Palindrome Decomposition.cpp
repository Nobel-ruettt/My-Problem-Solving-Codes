#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    unsigned long long pwr[1005];
    unsigned long long h[1005];
    const unsigned long long base=101;

    unsigned long long forward_hash_value(int l,int r)
    {
        unsigned long long hash_value=h[r];
        if(l>0)hash_value= hash_value - pwr[r-l+1]*h[l-1];
        return hash_value;
    }

    int solve(int u,int v)
    {
        if(u>v)return 0;
        int ans=1;
        for(int i=u;i<=v;i++)
        {
            int len=i-u+1;
            if(2*len>v-u+1)break;
            if(forward_hash_value(u,i)==forward_hash_value(v-len+1,v))
            {
                ans=2+solve(i+1,v-len);
                break;
            }
        }
        return ans;
    }

    int longestDecomposition(string text)
    {
        pwr[0]=1;
        for(int i=1;i<=text.size()+1;i++)pwr[i]=pwr[i-1]*base;
        h[0]=(text[0]-'a'+1);
        for(int i=1;i<text.size();i++)h[i]= (h[i-1]*base+(text[i]-'a'+1));
        return solve(0,text.size()-1);
    }
};






int main()
{
    Solution n;
    string s;
    cin>>s;
    cout<<n.longestDecomposition(s)<<endl;
    return 0;
}
