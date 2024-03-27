#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char arr[20000][51];
int compare(const void *a, const void *b) {
    char *wordA = (char *)a;
    char *wordB = (char *)b;
    int lenA = strlen(wordA);
    int lenB = strlen(wordB);
    if(lenA != lenB) {
        return lenA - lenB;
    }
    return strcmp(wordA, wordB);
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%s",arr[i]);
    }
    qsort(arr, n, 51, compare);
    for(int i=0;i<n;i++) {
        if(i>0 && strcmp(arr[i], arr[i-1]) == 0) {
            continue;
        }
        printf("%s\n",arr[i]);
    }
    return 0;
}