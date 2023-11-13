#include <stdio.h>
int main(){
    int a,b,i,arr[1001],cnt,r=0;
    scanf("%d %d",&a,&b);
    for(i=0;i<a;i++){
        arr[i] = i+1;
    }
    printf("<");
    i=-1;
    while(r<a){
        cnt=0;
        while(cnt<b){
            i++;
            if(i==a) i=0;
            if(arr[i] != -1) cnt++;
        }
        printf("%d",arr[i]);
        arr[i] = -1;
        r++;
        if(r<a) printf(", ");
    }
    printf(">");
    return 0;
}