#include <stdio.h>
int h, w, vis[101][101];
char graph[101][101];
void dfs(int x, int y) {
    if(x<0 || y<0 || x>=h || y>=w || vis[x][y] || graph[x][y] != '#') return;
    vis[x][y] = 1;
    dfs(x, y + 1);
    dfs(x, y - 1);
    dfs(x + 1, y);
    dfs(x - 1, y);
}
int main() {
    int t;
    scanf("%d", &t);
    for (int i=0;i<t;i++) {
        scanf("%d %d", &h,&w);
        for(int j=0;j<h;j++) {
            for(int k=0;k<w;k++) {
                graph[j][k] = 0;
                vis[j][k] = 0;
            }
            scanf("%s", graph[j]);
        }
        int cnt = 0;
        for (int j=0;j<h;j++) {
            for (int k=0;k<w;k++) {
                if (!vis[j][k] && graph[j][k] == '#') {
                    dfs(j, k);
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
