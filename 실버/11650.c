#include <stdio.h>
#include <string.h>
int compare(const void *a, const void *b) {
    int *arrA = (int *)a;
    int *arrB = (int *)b;
    if(arrA[0] == arrB[0]) {
        return arrA[1] - arrB[1];
    }
    return arrA[0] - arrB[0];
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n][2];
    for(int i=0;i<n;i++) {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    qsort(arr, n, sizeof(arr[0]), compare);
    for(int i=0;i<n;i++) {
        printf("%d %d\n", arr[i][0], arr[i][1]);
    }
    return 0;
}