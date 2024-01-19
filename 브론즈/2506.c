#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int cnt=0, r=0;
    for(int i=0;i<n;i++) {
        if(a[i]) {
            cnt++;
            r += cnt;
        } else {
            cnt=0;
        }
    }
    printf("%d",r);
    return 0;
}