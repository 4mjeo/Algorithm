#include <stdio.h>
long long dp[81] ={0,1,};
int main() {
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n+1;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    printf("%lld", 2*(dp[n] + dp[n+1]));
    return 0;
}
