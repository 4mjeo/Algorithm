#include <stdio.h>
int main(){
  char s[1001];
  int n;
  scanf("%s",s);
  scanf("%d",&n);
  printf("%c",s[n-1]);
  return 0;
}