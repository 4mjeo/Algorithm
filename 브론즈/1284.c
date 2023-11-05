#include <stdio.h>
int main(){
    int n;
    while(1){
        scanf("%d",&n);
        int len=0;
        if(n==0) return 0;
        
        while(1){
            if(n%10==1) len+=2;
            else if(n%10==0) len+=4;
            else len+=3;
            if(n<10) break;
            
            n/=10;
            len+=1;
        }
        printf("%d\n",len+2);
    }
    return 0;
}
