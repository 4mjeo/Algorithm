#include <stdio.h>
int main() {
    int n, cnt[10]={0,}, max=0;
    scanf("%d",&n);
    if(n == 0) {
        printf("1");
        return 0;
    }
    while(n != 0) {
        cnt[n%10]++;
        n /= 10;
    }
    for(int i=0;i<9;i++) {
        if(i != 6 && max < cnt[i]) max = cnt[i];
    }
    int a = cnt[6] + cnt[9];
    if(a%2 == 0) a /= 2;
    else a = a/2+1;
    if(max < a) max = a;
    printf("%d",max);
    return 0;
}