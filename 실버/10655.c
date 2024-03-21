#include <stdio.h>
#include <stdlib.h>
int f(int x1, int y1, int x2, int y2) {
    return abs(x1-x2) + abs(y1-y2);
}
int main() {
    int n;
    scanf("%d",&n);
    int x[100010], y[100010];
    for(int i=0;i<n;i++) {
        scanf("%d %d",&x[i], &y[i]);
    }
    int r = 0;
    for(int i=1;i<n;i++) {
        r += f(x[i-1], y[i-1], x[i], y[i]);
    }
    int max=0;
    for(int i=1;i<n-1;i++) {
        int d = f(x[i-1], y[i-1], x[i], y[i]) + f(x[i], y[i], x[i+1], y[i+1]);
        int min = f(x[i-1], y[i-1], x[i+1], y[i+1]);
        int save = d - min;
        if(save > max) {
            max = save;
        }
    }
    printf("%d",r-max);
    return 0;
}