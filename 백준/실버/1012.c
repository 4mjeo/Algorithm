#include <stdio.h>
int T, M, N, K;
int field[50][50];
int visited[50][50];
void dfs(int x, int y) {
    if(x < 0 || y < 0 || x >= M || y >= N) return;
    if(field[x][y] == 0 || visited[x][y]) return;
    visited[x][y] = 1;
    dfs(x-1, y);
    dfs(x+1, y);
    dfs(x, y-1);
    dfs(x, y+1);
}
int main() {
    scanf("%d", &T);
    while(T--) {
        scanf("%d %d %d", &M, &N, &K);
        for(int i = 0; i < M; i++)
            for(int j = 0; j < N; j++)
                field[i][j] = visited[i][j] = 0;
        for(int i = 0; i < K; i++) {
            int x, y;
            scanf("%d %d", &x, &y);
            field[x][y] = 1;
        }
        int count = 0;
        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                if(field[i][j] == 1 && !visited[i][j]) {
                    dfs(i, j);
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
