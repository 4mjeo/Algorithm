#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int main() {
    int n;
    scanf("%d",&n);
    if(n == 0) {
        printf("0\n");
    } else {
        int *rate = (int *)malloc(sizeof(int) * n);
        for(int i=0;i<n;i++) {
            scanf("%d", &rate[i]);
        }
        qsort(rate, n, sizeof(int), compare);
        int t = round((double)n / 100 * 15);
        int divnum = n - (t*2), sum = 0;
        for(int i=t;i<n-t;i++) {
            sum += rate[i];
        }
        if(divnum > 0) {
            printf("%d\n", (int)round((double)sum / divnum));
        } else printf("0\n");
        free(rate);
    }
    return 0;
}
