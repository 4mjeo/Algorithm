#include <stdio.h>
int main() {
    int dp[11];
    int t,n;
    scanf("%d",&t);
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<=10;i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    while(t--) {
        scanf("%d",&n);
        printf("%d\n",dp[n]);
    }
    return 0;
}