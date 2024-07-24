#include <stdio.h>
int k,n;
long long arr[10000];
int check(long long len) {
    long long cnt=0;
    for(int i=0;i<k;i++) {
        cnt += arr[i] / len;
    }
    return cnt >= n;
}
int main() {
    scanf("%d %d",&k,&n);
    long long max=0;
    for(int i=0;i<k;i++) {
        scanf("%lld", &arr[i]);
        if (max < arr[i]) max = arr[i];
    }
    long long start=1, end=max, m, r=0;
    while(start <= end) {
        m = (start + end) / 2;
        if(check(m)) {
            r = m;
            start = m+1;
        } else {
            end = m-1;
        }
    }
    printf("%lld",r);
    return 0;
}
