#include <stdio.h>
#include <string.h>
int main() {
    char s[1000001];
    scanf("%s",s);
    int cnt=0;
    char a = s[0];
    for(int i=1;i<strlen(s);i++) {
        if(s[i] != a) {
            cnt++;
            a = s[i];
        }
    }
    printf("%d",(cnt+1) / 2);
    return 0;
}