#include <stdio.h>
int function(int a){
    int r = a;
    while(a != 0){
        r += (a%10);
        a /= 10;
    }
    return r;
}
int main(){
    int i,j,arr[10001]={0,};
    for(i=1;i<=10000;i++){
        j = function(i);
        if(j<=10000){
            arr[j] = 1;
        }
    }
    for(i=1;i<=10000;i++){
        if(arr[i] != 1) printf("%d\n",i);
    }
}