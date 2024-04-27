#include <stdio.h>
int main() {
  int t,s;
  scanf("%d %d",&t,&s);
  if(t<=11 || t>=17 || s==1) {
    t = 280;
  }
  else t = 320;
  printf("%d",t);
  return 0;
}