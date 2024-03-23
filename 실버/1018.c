#include <stdio.h>
#include <stdlib.h>
int least(int a, int b) {
    return a < b ? a : b;
}
int cnt(char s[][50], int a, int b) {
    int cnt = 0;
    int cnt1 = 0;
    for(int i=a;i<a+8;i++) {
        for(int j=b;j<b+8;j++) {
            if((i+j) % 2 == 0) {
                if(s[i][j] != 'W') ++cnt;
                if(s[i][j] != 'B') ++cnt1;
            } else {
                if(s[i][j] != 'B') ++cnt;
                if(s[i][j] != 'W') ++cnt1;
            }
        }
    }
    return least(cnt, cnt1);
}
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    char s[50][50];
    for(int i=0;i<n;i++) {
        scanf("%s",s[i]);
    }
    int min = 64;
    for(int i=0;i+7<n;i++) {
        for(int j=0;j+7<m;j++) {
            min = least(min, cnt(s, i, j));
        }
    }
    printf("%d",min);
    return 0;
}