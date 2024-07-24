#include <stdio.h>
int dp[100001];
int f(int x, int y) {
    return x < y ? x : y;
}
int main() {
    int n;
    scanf("%d",&n);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    dp[4] = 2;
    dp[5] = 1;
    dp[6] = 2;
    dp[7] = 1;
    for(int i=8;i<=n;i++) {
        dp[i] = f(f(dp[i-1], dp[i-2]), f(dp[i-5], dp[i-7]))+1;
    }
    printf("%d",dp[n]);
    return 0;
}