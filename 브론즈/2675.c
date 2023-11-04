#include <stdio.h>
#include <string.h>
int main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int a;
    char c[20];
    scanf("%d %s",&a,c);
      for(int j=0;j<strlen(c);j++){
        for(int k=0;k<a;k++){
          printf("%c",c[j]);
        }
      }
      printf("\n");
  }
  return 0;
}