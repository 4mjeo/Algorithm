#include <stdio.h>
int main() {
    int cnt[50001]={0,}, arr[500001];
    int n,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        cnt[arr[i]]++;
        if(cnt[arr[i]] > max) {
            max = cnt[arr[i]];
        }
    }
    printf("%d",max);
    return 0;
}