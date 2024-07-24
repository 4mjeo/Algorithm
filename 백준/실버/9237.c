#include <stdio.h>
#include <stdlib.h>
int f(const void *a, const void *b) {
    return *(int*)b - *(int*)a;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    qsort(arr, n, sizeof(int), f);
    int r=0;
    for(int i=0;i<n;i++) {
        if(r < arr[i]+i+1) r = arr[i]+i+1;
    }
    printf("%d",r+1);
    return 0;
}