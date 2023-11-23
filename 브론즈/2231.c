#include <stdio.h>
int f(int x){
    int r=0;
    while(x>0){
        r += x%10;
        x/=10;
    }
    return r;
}
int main(){
    int a,result=0;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        if(f(i) + i==a){
            result = i;
            break;
        }
    }
    printf("%d",result);
    return 0;
}
