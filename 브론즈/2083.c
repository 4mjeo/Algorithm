#include <stdio.h>
int main() {
    char s[10];
    int a,b;
    while(1) {
        scanf("%s %d %d",s,&a,&b);
        if(s[0]=='#' && a==0 && b==0) break;
        if(a>17 || b>=80) printf("%s Senior\n",s);
        else printf("%s Junior\n",s);
    }
    return 0;
}