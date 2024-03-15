#include <stdio.h>
#include <stdlib.h>
int arr[100][100];
int score[100];
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int main() {
    int n, m;
    scanf("%d %d", &n,&m);
    for(int i=0;i<n;i++) {
        for(int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
        qsort(arr[i], m, sizeof(int), compare);
    }
    for(int i=0;i<m;i++) {
        int tmp = 0;
        for(int j=0;j<n;j++)
            tmp = (tmp > arr[j][m-i-1]) ? tmp : arr[j][m-i-1];
        for(int j=0;j<n;j++) {
            if(tmp == arr[j][m-i-1])
                score[j]++;
        }
    }
    int h = 0;
    for(int i=0;i<n;i++) {
        h = (h > score[i]) ? h : score[i];
    }
    for(int i=0;i<n;i++) {
        if(h == score[i]) printf("%d ", i + 1);
    }
    printf("\n");
    return 0;
}
