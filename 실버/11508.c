#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b) {
    return (*(int*)b - *(int*)a);
}
int main() {
    int N,r=0;
    scanf("%d", &N);
    int* arr = (int*)malloc(sizeof(int) * N);
    for(int i=0;i<N;i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, N, sizeof(int), compare);
    for(int i=0;i<N;i++) {
        if(i%3 != 2) {
            r += arr[i];
        }
    }
    printf("%d", r);
    return 0;
}