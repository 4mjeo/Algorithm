#include <stdio.h>
int main(){
    int a,b,sum=0,tmp=10001;
    scanf("%d %d",&a,&b);
    for(int i=0;i*i<=b;i++){
        if(i*i >= a){
            if(tmp>i*i) tmp = i*i;
            sum += i*i;
        }
    }
    if(sum==0) printf("-1");
    else printf("%d\n%d",sum,tmp);
    return 0;
}