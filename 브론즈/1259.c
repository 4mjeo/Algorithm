#include <stdio.h>
#include <string.h>
int main() {
    char a[6];
    while(1) {
        scanf("%s",a);
        if(a[0] == '0') break;
        int len = strlen(a), tmp=1;
        for(int i=0;i<len/2;i++) {
            if(a[i] != a[len-i-1]) {
                tmp = 0;
                break;
            }
        }
        if(tmp) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}