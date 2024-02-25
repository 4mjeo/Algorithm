#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    double s[n], max=0, r=0;
    for(int i=0;i<n;i++) {
        scanf("%lf", &s[i]);
        if(s[i] > max) max = s[i];
    }
    for(int i=0;i<n;i++) {
        s[i] = s[i] / max*100;
        r += s[i];
    }
    printf("%.2lf", r/n);
    return 0;
}