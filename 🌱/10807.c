#include <stdio.h>
int main(){
int arr[101];
int x,n,tmp=0;
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
scanf("%d",&x);
for(int j=0;j<n;j++){
if(arr[j]==x)
tmp++;
}
printf("%d",tmp);
return 0;
}
