#include <stdio.h>
#include <stdlib.h>
int N,M,V, graph[1001][1001], vis[1001];
int q[1001], front, rear;
void dfs(int x) {
    vis[x] = 1;
    printf("%d ",x);
    for(int i=1;i<=N;i++) {
        if(graph[x][i] && !vis[i]) {
            dfs(i);
        }
    }
}
void bfs(int x) {
    vis[x] = 1;
    q[rear++] = x;
    while(front < rear) {
        x = q[front++];
        printf("%d ", x);
        for(int i=1;i<=N;i++) {
            if(graph[x][i] && !vis[i]) {
                vis[i] = 1;
                q[rear++] = i;
            }
        }
    }
}
int main() {
    int a,b;
    scanf("%d %d %d", &N, &M, &V);
    for(int i=0;i<M;i++) {
        scanf("%d %d",&a,&b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    dfs(V);
    printf("\n");
    for(int i=1;i<=N;i++) vis[i] = 0;
    bfs(V);
    return 0;
}