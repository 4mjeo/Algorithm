#include <stdio.h>
int graph[1001][1001], vis[1001][1001];
int M,N;
void dfs(int x, int y) {
    if(x<0 || y<0 || x>=M || y>=N) return;
    if (!vis[x][y] && !graph[x][y]) {
        vis[x][y] = 1;
        dfs(x, y + 1);
        dfs(x + 1, y);
        dfs(x, y - 1);
        dfs(x - 1, y);
    }
}

int main() {
    scanf("%d %d",&M,&N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%1d", &graph[i][j]);
        }
    }
    for (int i = 0; i < N; i++) {
        dfs(0,i);
    }
    for (int i = 0; i < N; i++) {
        if(vis[M-1][i] == 1) {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
