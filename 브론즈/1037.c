#include <stdio.h>
int main() {
    int n, min=1000001, max=0, a;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&a);
        if(a < min) min = a;
        if(a > max) max = a;
    }
    printf("%d", min*max);
}