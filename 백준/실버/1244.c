#include <stdio.h>
void toggle(int s[], int n) {
    s[n] = (s[n]==0) ? 1 : 0;
}
void f(int s[], int n, int sex, int cnt) {
    if(sex == 1) {
        for(int i=n;i<=cnt;i+=n) {
            toggle(s, i);
        }
    } else {
        int i = 0;
        while(n-i>0 && n+i<=cnt) {
            if(s[n-i] != s[n+i]) {
                break;
            }
            i++;
        }
        for(int j=n-i+1;j<=n+i-1;j++) {
            toggle(s, j);
        }
    }
}
int main() {
    int s[101] = {0};
    int cnt, cnt1;
    scanf("%d",&cnt);
    for(int i=1;i<=cnt;i++) {
        scanf("%d",&s[i]);
    }
    scanf("%d",&cnt1);
    for(int i=0;i<cnt1;i++) {
        int sex, n;
        scanf("%d %d",&sex,&n);
        f(s, n, sex, cnt);
    }
    for(int i=1;i<=cnt;i++) {
        printf("%d ",s[i]);
        if(i%20 == 0){
            printf("\n");
        }
    }
    return 0;
}
