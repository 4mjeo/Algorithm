#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int cnt=1, tmp=1;
    while(n>tmp) {
        tmp += 6 * cnt;
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}