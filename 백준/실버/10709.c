#include <stdio.h>
int main() {
    int h,w, r[101][101];
    char arr[101][101];
    scanf("%d %d",&h,&w);
    for(int i=0;i<h;i++) {
        scanf("%s",arr[i]);
    }
    for(int i=0;i<h;i++) {
        int t = -1;
        for(int j=0;j<w;j++) {
            if (arr[i][j] == 'c') t = 0;
            r[i][j] = t;
            if (t != -1) t++;
        }
    }
    for(int i=0;i<h;i++) {
        for(int j=0;j<w;j++) {
            printf("%d ",r[i][j]);
        }
        printf("\n");
    }
    return 0;
}
