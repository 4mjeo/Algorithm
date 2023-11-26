#include <stdio.h>
int main(){
    int n,arr[]={500,100,50,10,5,1},cnt,r=0;
    scanf("%d",&n);
    n = 1000-n;
    for(int i=0;i<6;i++){
        cnt = n/(arr[i]);
        n %= arr[i];
        r += cnt;
    }
    printf("%d",r);
    return 0;
}