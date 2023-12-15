#include <stdio.h>
int main(){
    int a,r=0,min=100;
    for(int i=0;i<7;i++){
        scanf("%d",&a);
        if(a%2==1){
            r += a;
            if(a<min) min = a;
        }
    }
    if(r==0) printf("-1");
    else printf("%d\n%d",r,min);
    return 0;
}