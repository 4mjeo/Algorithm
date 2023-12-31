#include <stdio.h>
int h, w;
char graph[101][101];
void dfs(int x, int y) {
    if(x<0 || y<0 || x>=h || y>=w || graph[x][y] != '#') return;
    graph[x][y] = '.';
    dfs(x, y+1);
    dfs(x, y-1);
    dfs(x+1, y);
    dfs(x-1, y);
}
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &h, &w);
        for(int j=0; j<h; j++) {
            scanf("%s", graph[j]);
        }
        int cnt = 0;
        for (int j=0; j<h; j++) {
            for (int k=0; k<w; k++) {
                if (graph[j][k] == '#') {
                    dfs(j, k);
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
