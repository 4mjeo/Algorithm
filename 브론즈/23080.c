#include <stdio.h>
#include <string.h>
int main() {
    int k;
    char s[1000001];
    scanf("%d %s",&k,s);
    int len = strlen(s);
    for(int i=0;i<len;i++) {
        if(i%k == 0) printf("%c",s[i]);
    }
    return 0;
}