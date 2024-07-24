#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    int n1 = *(int *)a;
    int n2 = *(int *)b;
    if(n1 < n2) return -1;
    if(n1 > n2) return 1;
    return 0;
} 
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    for(int i=0;i<n;i++) {
        printf("%d\n",arr[i]);
    }
    return 0;
}