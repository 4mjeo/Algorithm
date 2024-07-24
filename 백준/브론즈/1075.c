#include <stdio.h>
int main(){
    int a,b,x;
    scanf("%d %d",&a,&b);
    x = (a/100)*100;
    while(x%b!=0){
        x++;
    }
    x %= 100;
    printf("%02d",x);
    return 0;
}