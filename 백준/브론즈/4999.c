#include <stdio.h>
#include <string.h>
int main() {
    char a[1002],b[1002];
    scanf("%s",a);
    scanf("%s",b);
    if(strlen(a) >= strlen(b)) printf("go");
    else printf("no");
    return 0;
}