#include <stdio.h>
int main() {
    int n,i,max;
    int a[100001],dp[100001]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    dp[0] = a[0];
    max = a[0];
    for(i=1;i<n;i++) {
        if(dp[i-1] + a[i] > a[i]) {
            dp[i] = dp[i-1] + a[i];
        } else {
            dp[i] = a[i];
        }
        if(max < dp[i]) max = dp[i];
    }
    printf("%d",max);
    return 0;
}