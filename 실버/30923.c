#include <stdio.h>
#include <stdlib.h>
int main(){
    long long int n,a,b,first;
    scanf("%lld",&n);
    int r = n*2;
    scanf("%lld",&a);
    first = a;
    r += a*2;
    b = a;
    for(int i=1;i<n;i++){
        scanf("%lld",&a);
        r += a*2;
        r += abs(a-b);
        b = a;
    }
    r += first+b;
    printf("%lld",r);
    return 0;
}
