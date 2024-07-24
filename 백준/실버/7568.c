#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int w[n], h[n];
    for(int i=0;i<n;i++) {
        scanf("%d %d",&w[i], &h[i]);
    }
    for(int i=0;i<n;i++) {
        int tmp=1;
        for(int j=0;j<n;j++) {
            if(w[i] < w[j] && h[i] < h[j]) {
                tmp++;
            }
        }
        printf("%d ",tmp);
    }
    return 0;
}
