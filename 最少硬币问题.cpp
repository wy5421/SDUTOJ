#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[15],b[15],dp[21000],m;
    cin>>n;
    memset(dp,0x3f3f3f3f,sizeof(dp));
    dp[0]=0;
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i];
    cin>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<b[i];j++)
            for(int k=m;k>=a[i];k--)
               dp[k]=min(dp[k],dp[k-a[i]]+1);
    cout<<(dp[m]<0x3f3f3f3f?dp[m]:-1)<<endl;
    return 0;
}
