#include <stdio.h>
int main(){
    int n,tmp=1;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        tmp *= i;
    }
    printf("%d",tmp);
    return 0;
}