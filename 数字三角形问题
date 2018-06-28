#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[101][101],dp[101][101],n;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            cin>>a[i][j];
    for(int j=1;j<=n;j++)
        dp[n][j]=a[n][j];
    for(int i=n;i>1;i--)
        for(int j=1;j<i;j++)
            if(dp[i][j]>dp[i][j+1])
               dp[i-1][j]=dp[i][j]+a[i-1][j];
            else
                dp[i-1][j]=dp[i][j+1]+a[i-1][j];
    cout<<dp[1][1]<<endl;
    return 0;
}
