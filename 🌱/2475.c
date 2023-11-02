#include <stdio.h>
int main(){
    int a,r=0;
    for(int i=0;i<5;i++){
        scanf("%d",&a);
        r += a*a;
    }
    r %= 10;
    printf("%d",r);
    return 0;
}