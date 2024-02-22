#include <stdio.h>
int n,m;
int a[500][500], d[500][500];
int dfs(int x, int y, int cnt) {
    d[x][y] = cnt;
    if(x+1<n && a[x+1][y]==1 && d[x+1][y]==0) {
        cnt = dfs(x+1, y, cnt+1);
    }
    if(x-1>=0 && a[x-1][y]==1 && d[x-1][y]==0) {
        cnt = dfs(x-1, y, cnt+1);
    }
    if(y+1<m && a[x][y+1]==1 && d[x][y+1]==0) {
        cnt = dfs(x, y+1, cnt+1);
    }
    if(y-1>=0 && a[x][y-1]==1 && d[x][y-1]==0) {
        cnt = dfs(x, y-1, cnt+1);
    }
    return cnt;
}
int main() {
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int cnt=0, max=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(a[i][j]==1 && d[i][j]==0) {
                int p = dfs(i, j, 1);
                if(p > max) {
                    max = p;
                }
                cnt += 1;
            }
        }
    }
    printf("%d\n%d\n",cnt,max);
    return 0;
}