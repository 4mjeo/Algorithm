#include <stdio.h>
int dp[41][2];
void fibonacci(int n) {
    if(n == 0) {
        dp[0][0] = 1;
        dp[0][1] = 0;
    } else if(n == 1) {
        dp[1][0] = 0;
        dp[1][1] = 1;
    } else {
        if(dp[n][0] == -1 && dp[n][1] == -1) {
            fibonacci(n-1);
            fibonacci(n-2);
            dp[n][0] = dp[n-1][0] + dp[n-2][0];
            dp[n][1] = dp[n-1][1] + dp[n-2][1];
        }
    }
}
int main() {
    int t,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++) {
        for(int j=0;j<41;j++) {
            dp[j][0] = dp[j][1] = -1;
        }
        scanf("%d",&n);
        fibonacci(n);
        printf("%d %d\n",dp[n][0], dp[n][1]);
    }
    return 0;
}
