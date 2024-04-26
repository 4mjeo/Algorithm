#include <stdio.h>
int main() {
    int n,m,a,b;
    scanf("%d %d",&n,&m);
    int arr[n+1], sum[n+1];
    arr[0] = 0;
    sum[0] = 0;
    for(int i=1;i<=n;i++) {
        scanf("%d",&arr[i]);
        sum[i] = sum[i-1] + arr[i];
    }
    for(int i=0;i<m;i++) {
        scanf("%d %d",&a,&b);
        printf("%d\n",sum[b] - sum[a-1]);
    }
    return 0;
}