#include <stdio.h>
int main() {
    int s1[4], s2[4];
    int sum1 = 0, sum2 = 0;
    for(int i=0;i<4;i++) {
        scanf("%d",&s1[i]);
        sum1 += s1[i];
    }
    for(int i=0;i<4;i++) {
        scanf("%d",&s2[i]);
        sum2 += s2[i];
    }
    printf("%d\n", sum1 > sum2 ? sum1 : sum2);
    return 0;
}
