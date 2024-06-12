#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b) {
  int n1 = *(int *)a;
  int n2 = *(int *)b;
  if(n1 < n2) return -1;
  else if(n1 > n2) return 1;
  else return 0;
}
int f1(int *arr, int tmp, int size) {
  int m, start=0, end=size;
  while(end > start) {
    m = (start + end) / 2;
    if(arr[m] > tmp) end = m;
    else start = m + 1;
  }
  return end;
}
int f2(int *arr, int tmp, int size) {
  int m, start=0, end=size;
  while(end > start) {
    m = (start + end) / 2;
    if(arr[m] >= tmp) end = m;
    else start = m + 1;
  }
  return end;
}
int main() {
  int n,m,num;
  scanf("%d",&n);
  int *arr = (int *)malloc(sizeof(int) * n);
  for(int i=0;i<n;i++) {
    scanf("%d",&arr[i]);
  }
  qsort(arr, n, sizeof(int), compare);
  scanf("%d",&m);
  for(int i=0;i<m;i++) {
    scanf("%d",&num);
    printf("%d ",f1(arr, num, n) - f2(arr, num, n));
  }
  return 0;
}