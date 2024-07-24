#include <stdio.h>
int graph[9], vis[9], n,m;
void dfs(int x) {
    if(x == m) {
        for(int i=0;i<m;i++) {
            printf("%d ",graph[i]);
        }
        return;
    }
    for(int i=1;i<=n;i++) {
        if(!vis[i]) {
            vis[i] = 1;
            graph[x] = i;
            dfs(x+1);
            vis[i] = 0;
        }
    }
}
int main() {
    scanf("%d %d",&n,&m);
    dfs(0);
    return 0;
}