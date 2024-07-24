#include <stdio.h>
int main() {
    int h,m,s,r;
    scanf("%d %d %d",&h,&m,&s);
    scanf("%d",&r);
    s += r;
    m += s/60;
    s %= 60;
    h += m/60;
    m %= 60;
    h %= 24;
    printf("%d %d %d",h,m,s);
    return 0;
}