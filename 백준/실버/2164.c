#include <stdio.h>
int q[500000];
int front=0, rear=0;
void push(int a) {
    q[rear++] = a;
    if(rear == 500000) rear=0;
}
int pop() {
    int a = q[front++];
    if(front == 500000) front=0;
    return a;
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        push(i);
    }
    while(rear - front != 1) {
        pop();
        push(pop());
    }
    printf("%d",pop());
    return 0;
}