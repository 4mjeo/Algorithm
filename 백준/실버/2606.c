#include <stdio.h>
int graph[101][101], vis[101], cnt = 0;
int v;
void dfs(int x) {
    for (int i = 2; i <= v; i++) {
        if (!vis[i] && graph[x][i]) {
            vis[i] = 1;
            dfs(i);
        }
    }
}

int main() {
    int e,a,b;
    scanf("%d %d",&v,&e);
    for (int i = 0; i < e; i++) {
        scanf("%d %d",&a,&b);
        graph[a][b] = graph[b][a] = 1;
    }
    vis[1] = 1;
    dfs(1);
    for (int i = 2; i <= v; i++) {
        if(vis[i] == 1) cnt++;
    }
    printf("%d",cnt);
}
