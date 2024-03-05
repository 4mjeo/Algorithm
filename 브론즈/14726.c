#include <stdio.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        char s[16];
        int sum=0;
        scanf("%s",s);
        for(int i=0;i<16;i++) {
            int num = s[i] - '0';
            if(i%2==0) {
                num *= 2;
                if(num >= 10) num = num/10 + num%10;
            }
            sum += num;
        }
        if(sum%10 == 0) printf("T\n");
        else printf("F\n");
    }
    return 0;
}