#include <stdio.h>
int n,m;
int arr[100][100], vis[100][100];
void dfs(int x, int y, int cnt) {
    if(x<0 || y<0 || x>=n || y>=m) return;
    if(arr[x][y]==0 || vis[x][y] <= cnt && vis[x][y] != 0) return;
    vis[x][y] = cnt;
    dfs(x-1, y, cnt+1);
    dfs(x+1, y, cnt+1);
    dfs(x, y-1, cnt+1);
    dfs(x, y+1, cnt+1);
}
int main() {
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%1d",&arr[i][j]);
        }
    }
    dfs(0,0,1);
    printf("%d",vis[n-1][m-1]);
    return 0;
}