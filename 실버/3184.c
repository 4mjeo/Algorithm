#include <stdio.h>
int r, c, sheep, wolf,a,b;
char graph[250][250];
int vis[250][250];
void dfs(int x, int y) {
    vis[x][y] = 1;
    if(graph[x][y] == 'o') a++;
    else if (graph[x][y] == 'v') b++;
    if (x-1 >= 0 && graph[x-1][y] != '#' && vis[x-1][y] == 0) {
        dfs(x-1, y);
    }
    if (x+1 < r && graph[x+1][y] != '#' && vis[x+1][y] == 0) {
        dfs(x+1, y);
    }
    if (y-1 >= 0 && graph[x][y-1] != '#' && vis[x][y-1] == 0) {
        dfs(x, y-1);
    }
    if (y+1 < c && graph[x][y+1] != '#' && vis[x][y+1] == 0) {
        dfs(x, y+1);
    }
}
int main() {
    scanf("%d %d", &r, &c);
    for (int i=0; i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf(" %c", &graph[i][j]);
        }
    }
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            if (graph[i][j] != '#' && vis[i][j] == 0) {
                a = 0;
                b = 0;
                dfs(i, j);
                if (a > b) sheep += a;
                else wolf += b;
            }
        }
    }
    printf("%d %d\n", sheep, wolf);
    return 0;
}
