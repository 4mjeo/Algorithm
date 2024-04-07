#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    int n1 = *(int *)a;
    int n2 = *(int *)b;
    if(n1 < n2) return -1;
    if(n1 > n2) return 1;
    return 0;
}
int l(int *arr, int t, int size) {
    int m,start=0,end=size;
    while(end > start) {
        m = (start+end) / 2;
        if(arr[m] >= t) end = m;
        else start = m+1;
    }
    return end;
}
int u(int *arr, int t, int size) {
    int m,start=0,end=size;
    while(end > start) {
        m = (start + end) / 2;
        if(arr[m] > t) end = m;
        else start = m+1;
    }
    return end;
}
int main() {
    int n,m,num;
    scanf("%d",&n);
    int *arr = (int *)malloc(sizeof(int) *n);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    scanf("%d",&m);
    for(int i=0;i<m;i++) {
        scanf("%d",&num);
        printf("%d ",u(arr, num, n) - l(arr, num, n));
    }
    return 0;
}