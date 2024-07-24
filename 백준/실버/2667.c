#include <stdio.h>
int graph[25][25], vis[25][25];
int n, home[25 * 25], cnt = 0;
void dfs(int x, int y) {
    vis[x][y] = 1;
    home[cnt]++;
    if(x > 0 && graph[x-1][y] && !vis[x-1][y]) dfs(x-1, y);
    if(x < n-1 && graph[x+1][y] && !vis[x+1][y]) dfs(x+1, y);
    if(y > 0 && graph[x][y-1] && !vis[x][y-1]) dfs(x, y-1);
    if(y < n-1 && graph[x][y+1] && !vis[x][y+1]) dfs(x, y+1); 
}
void sort(int arr[], int a) {
    int min, tmp;
    for(int i=0;i<a-1;i++) {
        min = i;
        for(int j=i+1;j<a;j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }
        if(i != min) {
            tmp = arr[i];
            arr[i] = arr[min];
            arr[min] = tmp;
        }
    }
}
int main() {
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%1d", &graph[i][j]);
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(graph[i][j] == 1 && !vis[i][j]) {
                dfs(i, j);
                cnt++;
            }
        }
    }
    sort(home, cnt);
    printf("%d\n", cnt);
    for(int i=0;i<cnt;i++) {
        printf("%d\n", home[i]);
    }
    return 0;
}
