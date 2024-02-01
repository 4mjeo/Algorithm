#include <stdio.h>
int a,b,n,m;
int d[1001], q[1001 * 1001];
int front = -1, rear = -1;
int graph[1001][1001] = {0,};
void bfs(int s) {
    q[++rear] = s;
    d[s] = 0;
    while(front < rear) {
        int current = q[++front];
        for(int i=1;i<=n;i++) {
            if(graph[current][i] && d[i] > d[current] + 1) {
                d[i] = d[current] + 1;
                q[++rear] = i;
            }
        }
    }
}
int main() {
    scanf("%d %d",&a,&b);
    scanf("%d %d",&n,&m);
    for(int i=0;i<m;i++) {
        int x,y;
        scanf("%d %d",&x,&y);
        graph[x][y] = graph[y][x] = 1;
    }
    for(int i=1;i<=n;i++) {
        d[i] = 1000000;
    }
    bfs(a);
    if(d[b] != 1000000) {
        printf("%d",d[b]);
    } else {
        printf("-1");
    }
    return 0;
}