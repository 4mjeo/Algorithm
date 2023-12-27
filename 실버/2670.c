#include <stdio.h>
double function(double x, double y){
  return x > y ? x :y;
}
int main(){
  double a[10001],r,b;
  int n,i;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%lf",&a[i]);
  }
  r = a[0];
  for(int i=0;i<n;i++){
    b = 1;
    for(int j=i;j<n;j++){
      b *= a[j];
      r = function(r, b);
    }
  }
  printf("%.3lf",r);
  return 0;
}