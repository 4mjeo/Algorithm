#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
  int num1 = *(int *)a;
  int num2 = *(int *)b;
  if(num1 < num2) return -1;
  if(num1 > num2) return 1;
  return 0;
}
int main(){
    int a,r=0,time[1001];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&time[i]);
    }
    qsort(time, a, sizeof(int), compare);
    for(int i=0;i<a;i++){
        for(int j=0;j<=i;j++){
            r += time[j];
        }
    }
    printf("%d",r);
    return 0;
}