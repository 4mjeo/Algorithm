#include <stdio.h>
int q[5001];
int front=0, rear=0;
void push(int x) {
    q[rear] = x;
    rear = (rear+1) % 5001;
}
int pop() {
    int a = q[front];
    front = (front+1) % 5001;
    return a;
}
int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++) {
        push(i);
    }
    printf("<");
    for(int i=0;i<n;i++) {
        for(int j=0;j<k-1;j++) {
            push(pop());
        }
        printf("%d",pop());
        if(i < n-1) {
            printf(", ");
        }
    }
    printf(">\n");
    return 0;
}