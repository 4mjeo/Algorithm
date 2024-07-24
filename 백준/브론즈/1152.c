#include <stdio.h>
int main(){
    char s[1000000];
    int cnt=0;
    while(scanf("%s",s) != EOF){
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}