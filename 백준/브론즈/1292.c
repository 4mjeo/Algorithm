#include <stdio.h>
int main(){
    int a,b,arr[1001],n=1,cnt=0,r=0;
    for(int i=1;i<=1000;i++){
        arr[i] = n;
        cnt++;
        if(n==cnt){
            n++;
            cnt=0;
        }
    }
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        r += arr[i];
    }
    printf("%d",r);
    return 0;
}