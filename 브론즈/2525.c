#include <stdio.h>
int main() {
    int h,m,time,r;
    scanf("%d %d",&h,&m);
    scanf("%d",&time);
    r = h * 60 + m + time;
    printf("%d %d",(r/60) % 24, r%60);
    return 0;
}