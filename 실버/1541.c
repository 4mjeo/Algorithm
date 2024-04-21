#include <stdio.h>
#include <string.h>
int main() {
    char s[51];
    scanf("%s",s);
    int sum=0, n=0, tmp=1;
    for(int i=0;i<=strlen(s);i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            n = n * 10 + (s[i]-'0');
        } else {
            sum += tmp*n;
            n = 0;
            if(s[i] == '-') tmp = -1;
        }
    }
    printf("%d",sum);
    return 0;
}