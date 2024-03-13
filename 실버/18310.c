#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    int n;
    scanf("%d",&n);
    int *home = (int*)malloc(sizeof(int) * n);
    for(int i=0;i<n;i++) {
        scanf("%d",&home[i]);
    }
    qsort(home, n, sizeof(int), compare);
    int m = home[(n-1) / 2];
    printf("%d",m);
    return 0;
}