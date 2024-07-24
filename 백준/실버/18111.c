#include <stdio.h>
int main() {
    int n,m,b,min=256,max=0,t,minTime=2147483647,height;
    scanf("%d %d %d",&n,&m,&b);
    int arr[500][500];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&arr[i][j]);
            if(arr[i][j] > max) max = arr[i][j];
            if(arr[i][j] < min) min = arr[i][j];
        }
    }
    for(int h=min;h<=max;h++) {
        int tmp = b;
        t = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                int d = arr[i][j] - h;
                if(d > 0) {
                    t += d*2;
                    tmp += d;
                } else if(d < 0) {
                    t -= d;
                    tmp += d;
                }
            }
        }
        if(t <= minTime && tmp >= 0) {
            minTime = t;
            height = h;
        }
    }
    printf("%d %d",minTime,height);
    return 0;
}