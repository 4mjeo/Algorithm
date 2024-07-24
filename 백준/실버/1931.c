#include <stdio.h>
#include <stdlib.h>
int start[100000], end[100000], tmp[100000];
int compare(const void *a, const void *b) {
    int n1 = *(int *)a;
    int n2 = *(int *)b;
    if(end[n1] == end[n2]) {
        return start[n1] - start[n2];
    }
    return end[n1] - end[n2];
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d %d",&start[i],&end[i]);
        tmp[i] = i;
    }
    qsort(tmp, n, sizeof(int), compare);
    int cnt=0, now=0;
    for(int i=0;i<n;i++) {
        if(now <= start[tmp[i]]) {
            now = end[tmp[i]];
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}