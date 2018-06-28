#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dp[1010],p[120],m[120];
    int n,x;
    while(cin>>n>>x){
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=n;i++)
            cin>>p[i]>>m[i];
        for(int i=1;i<=n;i++)
            for(int j=x;j>=p[i];j--)
               dp[j]=max(dp[j],dp[j-p[i]]+m[i]);
        cout<<dp[x]<<endl;
    }
    return 0;
}
