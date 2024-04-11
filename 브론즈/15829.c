#include <stdio.h>
#include <string.h>
int main() {
    int l,R=31;
    scanf("%d",&l);
    char str[l+1];
    scanf("%s",str);
    long long hash=0, r=1;
    for(int i=0;i<l;i++) {
        hash = (hash + (str[i] - 'a' + 1) * r) % 1234567891;
        r = (r*R) % 1234567891;
    }
    printf("%lld",hash);
    return 0;
}