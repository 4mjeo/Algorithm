#include <stdio.h>
int main() {
    int a,cnt=0;
    scanf("%d",&a);
    while(a>0) {
        if(a & 1) cnt++;
        a >>= 1;
    }
    printf("%d",cnt);
    return 0;
}