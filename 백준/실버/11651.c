#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    int *A = (int*)a;
    int *B = (int*)b;
    if(A[1] > B[1]) return 1;
    else if(A[1] < B[1]) return -1;
    else if(A[0] > B[0]) return 1;
    else if(A[0] < B[0]) return -1;
    return 0;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n][2];
    for(int i=0;i<n;i++) {
        scanf("%d %d",&arr[i][0], &arr[i][1]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    for(int i=0;i<n;i++) {
        printf("%d %d\n", arr[i][0], arr[i][1]);
    }
    return 0;
}