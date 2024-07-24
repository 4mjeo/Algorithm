#include <stdio.h>
int main() {
    int n, cnt=0, a=665;
    scanf("%d",&n);
    while(n!=cnt) {
        a++;
        int tmp = a;
        while(tmp) {
            if(tmp % 1000 == 666) {
                cnt++;
                break;
            }
            tmp /= 10;
        }
    }
    printf("%d",a);
    return 0;
}