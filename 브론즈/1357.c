#include <stdio.h>
int rev(int x){
    int r=0;
    while(x>0){
        r = (r*10)+(x%10);
        x/=10;
    }
    return r;
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",rev(rev(a) + rev(b)));
    return 0;
}