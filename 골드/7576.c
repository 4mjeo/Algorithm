#include <stdio.h>
int m,n;
int graph[1001][1001], qx[1000001], qy[1000001];
int front=0, rear=0;
void push(int x, int y) {
    if(x<0 || x>=n || y<0 || y>=m || graph[x][y] != 0) return;
    graph[x][y] = graph[qx[front]][qy[front]] + 1;
    qx[rear] = x;
    qy[rear] = y;
    rear++;
}
void bfs() {
    while(front < rear) {
        push(qx[front] - 1, qy[front]);
        push(qx[front] + 1, qy[front]);
        push(qx[front], qy[front] - 1);
        push(qx[front], qy[front] + 1);
        front++;
    }
}
int main() {
    scanf("%d %d",&m,&n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%d",&graph[i][j]);
            if(graph[i][j] == 1) {
                qx[rear] = i;
                qy[rear] = j;
                rear++;
            }
        }
    }
    bfs();
    int r=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(graph[i][j] == 0) {
                printf("-1");
                return 0;
            }
            if(r < graph[i][j]) r = graph[i][j];
        }
    }
    printf("%d",r-1);
    return 0;
}