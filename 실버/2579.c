#include <stdio.h>
int max(int a, int b) {
    return a > b ? a : b;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[301], dp[301];
    for(int i=1;i<=n;i++) {
        scanf("%d",&arr[i]);
    }
    dp[1] = arr[1];
    dp[2] = max(arr[1] + arr[2], arr[2]);
    dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);
    for(int i=4;i<=n;i++) {
        dp[i] = max(dp[i-2] + arr[i], dp[i-3] + arr[i-1] + arr[i]);
    }
    printf("%d",dp[n]);
    return 0;
}