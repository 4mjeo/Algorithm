#include <stdio.h>
int main() {
    int a, cnt=0;
    scanf("%d", &a);
    for (int i=0;i<5;i++) {
        int car;
        scanf("%d", &car);
        if (car == a) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
