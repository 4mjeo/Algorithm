#include <stdio.h>
int main(){
  int a,max=0,b;
  for(int i=0;i<9;i++){
    scanf("%d",&a);
    if(a>max){
      max=a;
      b=i+1;
    }
  }
  printf("%d\n%d",max,b);
  return 0;
}