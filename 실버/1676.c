#include <stdio.h>
int main() {
    int n, cnt=0;
    scanf("%d",&n);
    for(int i=5;n/i>=1;i*=5) {
        cnt += n/i;
    }
    printf("%d",cnt);
    return 0;
}