#include <stdio.h>
int f(const void *a, const void *b) {
    int n1 = *(int *)a;
    int n2 = *(int *)b;
    if(n1 < n2) return -1;
    if(n1 > n2) return 1;
    return 0;
}
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int *arr = (int *)malloc(sizeof(int) * n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    qsort(arr, n, sizeof(int), f);
    printf("%d",arr[k-1]);
    return 0;
}