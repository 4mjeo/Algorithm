#include <stdio.h>
int main() {
    int r=0,t;
    for(int i=0;i<4;i++) {
        scanf("%d",&t);
        r += t;
    }
    printf("%d\n%d",r/60,r%60);
    return 0;
}