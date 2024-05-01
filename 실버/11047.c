#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
  int n1 = *(int *)a;
  int n2 = *(int *)b;
  if(n1 < n2) return -1;
  if(n2 > n1) return 1;
  return 0;
}
int main() {
  int n,k;
  scanf("%d %d",&n,&k);
  int arr[10];
  for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);
  }
  qsort(arr, n, sizeof(int), compare);
  int cnt=0;
  for(int i=n-1;i>=0;i--) {
    cnt += k/arr[i];
    k %= arr[i];
  }
  printf("%d",cnt);
  return 0;
}