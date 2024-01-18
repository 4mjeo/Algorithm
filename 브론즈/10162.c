#include <stdio.h>
int main() {
    int T, a=0, b=0, c=0;
    scanf("%d",&T);
    if(T%10 != 0) {
        printf("-1");
        return 0;
    }
    a = T/300;
    T = T%300;
    b = T/60;
    T = T%60;
    c = T/10;
    
    printf("%d %d %d",a,b,c);
    return 0;
}