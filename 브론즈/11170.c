#include <stdio.h>
int main() {
    int t,n,m;
    scanf("%d",&t);
    while(t--) {
        scanf("%d %d",&n,&m);
        int cnt=0;
        for(int i=n;i<=m;i++) {
            int a = i;
            if(a==0) cnt++;
            while(a) {
                if(a%10 == 0) cnt++;
                a /= 10;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}