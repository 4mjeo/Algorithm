#include <stdio.h>
int main(){
    int x,n,result=0;
    scanf("%d", &n);
    x = n;
    while(1){
        int sum = n/10 + n%10;
        n = (n%10)*10 + sum%10;
        result++;
        if(n == x) break;
    }
    printf("%d", result);
    return 0;
}