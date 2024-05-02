#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a = n*78/100;
    int b = (n*80/100) + (n*20 / 100*78 / 100);
    printf("%d %d",a,b);
    return 0;
}
