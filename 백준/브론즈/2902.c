#include <stdio.h>
int main() {
    char s[101];
    scanf("%s",s);
    for(int i=0;i<s[i]!='\0';i++) {
        if(i==0 || s[i-1] == '-') {
            printf("%c",s[i]);
        }
    }
    return 0;
}