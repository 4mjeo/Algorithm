#include <stdio.h>
long long a,b;
int r = -1;
void function(long long n, int cnt) {
    if(n > b) return;
    if(n == b) {
        if(r == -1 || r > cnt) r = cnt;
        return;
    }
    function(n*2, cnt+1);
    function(n*10+1, cnt+1);
}
int main() {
    scanf("%lld %lld", &a,&b);
    function(a, 1);
    printf("%d", r);
    return 0;
}