#include <stdio.h>
int qx[600*600], qy[600*600];
int front=0,rear=0,n,m,cnt=0;
char graph[600][600];
int vis[600][600] = {0,};
void bfs() {
    while(front < rear) {
        int x = qx[front];
        int y = qy[front++];
        if(x>0 && !vis[x-1][y] && graph[x-1][y] != 'X') {
            vis[x-1][y] = 1;
            if(graph[x-1][y] == 'P') cnt++;
            qx[rear] = x-1;
            qy[rear++] = y;
        }
        if(x<n-1 && !vis[x+1][y] && graph[x+1][y] != 'X') {
            vis[x+1][y] = 1;
            if(graph[x+1][y] == 'P') cnt++;
            qx[rear] = x+1;
            qy[rear++] = y;
        }
        if(y>0 && !vis[x][y-1] && graph[x][y-1] != 'X') {
            vis[x][y-1] = 1;
            if(graph[x][y-1] == 'P') cnt++;
            qx[rear] = x;
            qy[rear++] = y-1;
        }
        if(y<m-1 && !vis[x][y+1] && graph[x][y+1] != 'X') {
            vis[x][y+1] = 1;
            if(graph[x][y+1] == 'P') cnt++;
            qx[rear] = x;
            qy[rear++] = y+1;
        }
    }
}
int main() {
    int x1, y1;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++) {
        scanf("%s",graph[i]);
        for(int j=0;j<m;j++) {
            if(graph[i][j] == 'I') {
                vis[i][j] = 1;
                x1 = i;
                y1 = j;
            }
        }
    }
    qx[rear] = x1;
    qy[rear++] = y1;
    bfs();
    if(cnt==0) printf("TT");
    else printf("%d",cnt);
    return 0;
}
