#include <stdio.h>
int n,m;
int graph[1001][1001], vis[1001];
void dfs(int x) {
    vis[x] = 1;
    for(int i=1;i<=n;i++) {
        if(graph[x][i] && !vis[i]) {
            dfs(i);
        }
    }
}
int main() {
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++) {
        int a,b;
        scanf("%d %d",&a,&b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    int cnt=0;
    for(int i=1;i<=n;i++) {
        if(!vis[i]) {
            dfs(i);
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}