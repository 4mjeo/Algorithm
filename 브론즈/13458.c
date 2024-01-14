#include <stdio.h>
int main() {
    int n,b,c;
    long long r=0;
    int arr[1000000] = {0,};
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&b,&c);
    for(int i=0;i<n;i++) {
        arr[i] = arr[i] - b;
        r++;
        if(arr[i] > 0) {
            r += arr[i] / c;
            if(arr[i] % c != 0) r++;
        }
    }
    printf("%lld",r);
    return 0;
}