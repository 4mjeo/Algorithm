#include <stdio.h>
int main() {
    int a,b,c;
    while(1) {
        scanf("%d %d %d",&a,&b,&c);
        if(a==0 && b==0 && c==0) break;
        if(a*a <= b*b + c*c || c*c <= b*b + a*a || b*b <= a*a + c*c) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}