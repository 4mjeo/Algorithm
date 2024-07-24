#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 500000
#define NAME_LEN 21
char arr[MAX][NAME_LEN];
char r[MAX][NAME_LEN];
int compare(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}
int main() {
    int n,m, cnt=0;
    scanf("%d %d", &n,&m);
    for(int i= 0;i<n+m;i++) {
        scanf("%s",arr[i]);
    }
    qsort(arr, n+m, NAME_LEN, compare);
    for(int i=0;i<n+m-1;i++) {
        if (strcmp(arr[i], arr[i+1]) == 0) {
            strcpy(r[cnt++], arr[i]);
            i++;
        }
    }
    printf("%d\n",cnt);
    for(int i=0;i<cnt;i++) {
        printf("%s\n",r[i]);
    }
    return 0;
}