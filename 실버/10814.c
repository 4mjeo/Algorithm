#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int age[100000];
char name[100000][101];
int idx[100000];
int compare(const void *a, const void *b) {
    int x = *(int *)a;
    int y = *(int *)b;
    if(age[x] == age[y]) {
        return x - y;
    }
    return age[x] - age[y];
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d %s",&age[i], name[i]);
        idx[i] = i;
    }
    qsort(idx, n, sizeof(int), compare);
    for(int i=0;i<n;i++) {
        printf("%d %s\n",age[idx[i]], name[idx[i]]);
    }
    return 0;
}