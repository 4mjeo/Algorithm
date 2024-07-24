#include <stdio.h>
int q[100001], vis[100001];
int front=0, rear=0;
void push(int a) {
    q[rear++] = a;
}
int pop() {
    return q[front++];
}
int empty() {
    if(front == rear) return 1;
    else return 0;
}
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    push(n);
    vis[n] = 1;
    while(!empty()) {
        int x = pop();
        if(x == k) {
            printf("%d",vis[x]-1);
            return 0;
        }
        if(x+1<=100000 && vis[x+1]==0){
            push(x+1);
            vis[x+1] = vis[x]+1;
        }
        if(x-1>=0 && vis[x-1]==0){
            push(x-1);
            vis[x-1] = vis[x]+1;
        }
        if(x*2<=100000 && vis[x*2] == 0){
            push(x*2);
            vis[x*2] = vis[x]+1;
        }
    }
    return 0;
}