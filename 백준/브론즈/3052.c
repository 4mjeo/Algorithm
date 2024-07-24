#include <stdio.h>
int main(){
    int a,result=0,r[10];
    for(int i=0; i<10; i++) {
        scanf("%d", &a);
        r[i] = a%42;
    }
    for(int i=0;i<10;i++){
        int cnt=0;
        for(int j=i+1;j<10;j++){
            if(r[i] == r[j]) cnt++;
        }
        if(cnt==0) result++;
    }
   printf("%d", result);
}