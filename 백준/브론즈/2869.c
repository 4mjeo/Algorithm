#include <stdio.h>
int main(){
    int a,b,v,r;
    scanf("%d %d %d",&a,&b,&v);
    r = (v-b-1)/(a-b)+1;
    printf("%d",r);
    return 0;
}