#include <stdio.h>
int f(int n) {
    int r=1;
    for(int i=1;i<=n;i++) {
        r *= i;
    }
    return r;
}
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int r = f(n) / (f(k) * f(n-k));
    printf("%d",r);
    return 0;
}