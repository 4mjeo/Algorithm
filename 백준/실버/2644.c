#include <stdio.h>
int n,m,a,b,r=-1;
int graph[101][101], vis[101];
void dfs(int x, int y) {
    if(x == b) {
        r = y;
        return;
    }
    vis[x] = 1;
    for(int i=1;i<=n;i++) {
        if(graph[x][i] && !vis[i]) {
            dfs(i, y+1);
        }
    }
}
int main() {
    scanf("%d",&n);
    scanf("%d %d",&a, &b);
    scanf("%d",&m);
    for(int i=0;i<m;i++) {
        int q,w;
        scanf("%d %d",&q,&w);
        graph[q][w] = 1;
        graph[w][q] = 1;
    }
    dfs(a, 0);
    printf("%d",r);
    return 0;
}
