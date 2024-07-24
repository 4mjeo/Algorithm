#include <stdio.h>
int main() {
  int n,cnt=0;
  int a[1000001] = {0,}, b[1000001] = {0,};
  scanf("%d",&n);
  for(int i=0;i<n;i++) {
    scanf("%d",&a[i]);
  }
  for(int i=0;i<n;i++) {
    if(b[i] != a[i]) {
      b[i] = 1-a[i];
      b[i+1] = 1-b[i+1];
      b[i+2] = 1-b[i+2];
      cnt++;
    }
  }
  printf("%d",cnt);
  return 0;
}