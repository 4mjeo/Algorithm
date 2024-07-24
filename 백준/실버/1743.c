#include <stdio.h>
int n,m,k,a;
int graph[101][101];
int vis[101][101];
int dfs(int x, int y) {
    int r = 1;
    vis[x][y] = 1;
    if (x > 0 && graph[x-1][y] && !vis[x-1][y])
        r += dfs(x-1, y);
    if (x < n-1 && graph[x+1][y] && !vis[x+1][y])
        r += dfs(x+1, y);
    if (y > 0 && graph[x][y-1] && !vis[x][y-1])
        r += dfs(x, y-1);
    if (y < m-1 && graph[x][y+1] && !vis[x][y+1])
        r += dfs(x, y+1);
    return r;
}
int main() {
    scanf("%d %d %d", &n,&m,&k);
    for (int i=0;i<k;i++) {
        int x, y;
        scanf("%d %d", &x,&y);
        graph[x-1][y-1] = 1;
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (graph[i][j] && !vis[i][j]) {
                int tmp = dfs(i, j);
                a = a > tmp ? a : tmp;
            }
        }
    }
    printf("%d", a);
    return 0;
}
