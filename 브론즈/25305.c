#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b){
    int n = *(int *)a;
    int m = *(int *)b;
    if(n>m) return -1;
    if(n<m) return 1;
    return 0;
}
int main(){
    int N,k;
    scanf("%d %d",&N,&k);
    int *score = (int*)malloc(sizeof(int)*N);
    for(int i=0;i<N;i++){
        scanf("%d",&score[i]);
    }
    qsort(score,N,sizeof(int),compare);
    printf("%d",score[k-1]);
    return 0;
}