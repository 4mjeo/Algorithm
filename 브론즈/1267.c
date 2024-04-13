#include <stdio.h>
int main() {
    int n,t;
    int y=0, m=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&t);
        y += (t/30 + 1)*10;
        m += (t/60 + 1)*15;
    }
    if(y < m) printf("Y %d",y);
    else if(m < y) printf("M %d",m);
    else printf("Y M %d",y);
    return 0;
}
