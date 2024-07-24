#include <stdio.h>
int main(){
  int a,score=0;;
  for(int i=0;i<5;i++){
    scanf("%d",&a);
    if(a<40){
      score+=40;
    }
    else if(a>=40){
      score+=a;
    }
  }
  score/=5;
  printf("%d",score);
  return 0;
}