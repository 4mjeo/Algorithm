#include <stdio.h>
int dp[41];
int f(int n) {
    dp[1] = dp[2] = 1;
    for (int i=3;i<=n;i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d %d\n", f(n), n-2);
    return 0;
}
