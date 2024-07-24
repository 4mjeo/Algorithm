#include <stdio.h>
int main(){
    int t,h,w,n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d %d",&h,&w,&n);
        int a = n%h;
        int b = n/h+1;
        if(n%h==0){
            a=h;
            b=n/h;
        }
        printf("%d%02d\n",a,b);
    }
    return 0;
}