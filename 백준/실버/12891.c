#include <stdio.h>
#include <string.h>
int main() {
    int s,p,cnt = 0;
    int n[4] = {0}, h[4] = {0};
    char S[1500001];
    scanf("%d %d", &s,&p);
    scanf("%s",S);
    for(int i=0;i<4;i++) {
        scanf("%d",&n[i]);
    }
    for(int i=0;i<p;i++) {
        if(S[i] == 'A') h[0]++;
        else if(S[i] == 'C') h[1]++;
        else if(S[i] == 'G') h[2]++;
        else if(S[i] == 'T') h[3]++;
    }
    for(int i=0;i<=s-p;i++) {
        int tmp=1;
        for(int j=0;j<4;j++) {
            if(h[j] < n[j]) {
                tmp = 0;
                break;
            }
        }
        if(tmp) cnt++;
        if(S[i] == 'A') h[0]--;
        else if(S[i] == 'C') h[1]--;
        else if(S[i] == 'G') h[2]--;
        else if(S[i] == 'T') h[3]--;
        if(i+p < s) {
            if(S[i+p] == 'A') h[0]++;
            else if(S[i+p] == 'C') h[1]++;
            else if(S[i+p] == 'G') h[2]++;
            else if(S[i+p] == 'T') h[3]++;
        }
    }
    printf("%d",cnt);
    return 0;
}