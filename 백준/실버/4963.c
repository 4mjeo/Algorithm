#include <stdio.h>
int graph[51][51], vis[51][51];
int w,h;
void dfs(int x, int y) {
  if(x<0 || y<0 || x>=h || y>=w) return;
  if(!vis[x][y] && graph[x][y]) {
    vis[x][y] = 1;
    dfs(x, y+1);
    dfs(x, y-1);
    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x+1, y+1);
    dfs(x-1, y-1);
    dfs(x+1, y-1);
    dfs(x-1, y+1);
  }
}
int main(){
  while(1) {
    scanf("%d %d",&w,&h);
    if(w==0 && h==0) break;
    for(int i=0;i<h;i++) {
      for(int j=0;j<w;j++) {
        graph[i][j] = 0;
        vis[i][j] = 0;
        scanf("%d",&graph[i][j]);
      }
    }
    int cnt = 0;
    for(int i=0;i<h;i++) {
      for(int j=0;j<w;j++) {
        if(graph[i][j] == 1 && !vis[i][j]) {
          dfs(i, j);
          cnt++;
        }
      }
    }
    printf("%d\n",cnt);
  }
  return 0;
}