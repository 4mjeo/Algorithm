#include <stdio.h>
#define MAX 1000001
int main() {
    int n, arr[MAX], r=0;
    scanf("%d", &n);
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }
    arr[n] = arr[0];
    for (int i=0;i<n;i++) {
        if (arr[i] >= arr[i+1]) {
            r++;
        }
    }
    printf("%d", r);
    return 0;
}
