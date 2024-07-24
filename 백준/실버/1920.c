#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
    int num1 = *(int *)a;
    int num2 = *(int *)b;
    if(num1 < num2) return -1;
    if(num1 > num2) return 1;
    return 0;
}
int f(int arr[], int a, int b, int tmp) {
    while (a <= b) {
        int m = (a + b) / 2;
        if(arr[m] == tmp) return 1;
        else if(arr[m] < tmp) a = m+1;
        else b = m-1;
    }
    return 0;
}
int main() {
    int n,m;
    int arrN[100000], arrM[100000];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d", &arrN[i]);
    qsort(arrN, n, sizeof(int), compare);
    scanf("%d",&m);
    for(int i=0;i<m;i++) scanf("%d", &arrM[i]);
    for(int i=0;i<m;i++) {
        printf("%d\n", f(arrN, 0, n-1, arrM[i]));
    }
    return 0;
}
