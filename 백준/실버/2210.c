#include <stdio.h>
int graph[5][5];
int vis[1000000] = {0,};
void dfs(int x, int y, int n, int d) {
    if(d == 6) {
        if(!vis[n]) {
            vis[n] = 1;
        }
        return;
    }
    if(x > 0) dfs(x-1, y, n*10 + graph[x-1][y], d+1);
    if(x < 4) dfs(x+1, y, n*10 + graph[x+1][y], d+1);
    if(y > 0) dfs(x, y-1, n*10 + graph[x][y-1], d+1);
    if(y < 4) dfs(x, y+1, n*10 + graph[x][y+1], d+1);
}
int main() {
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            scanf("%d",&graph[i][j]);
        }
    }
    for(int i=0;i<5;i++) {
        for(int j=0;j<5;j++) {
            dfs(i, j, graph[i][j], 1);
        }
    }
    int cnt=0;
    for(int i=0;i<1000000;i++){
        if(vis[i]) cnt++;
    }
    printf("%d",cnt);
    return 0;
}