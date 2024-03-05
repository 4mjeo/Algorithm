#include <stdio.h>
#include <stdlib.h>
int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int n,cnt=0,cnt1=0;
        scanf("%d",&n);
        char* a = (char*)malloc(sizeof(char)*(n+1));
        char* b = (char*)malloc(sizeof(char)*(n+1));
        scanf("%s",a);
        scanf("%s",b);
        for(int i=0;i<n;i++) {
            if(a[i] != b[i]) {
                if(a[i] == 'W') cnt++;
                else cnt1++;
            }
        }
        printf("%d\n",cnt > cnt1 ? cnt : cnt1);
    }
    return 0;
}