#include <stdio.h>
#include <string.h>
int q[2000000];
int front=0, rear=0;
void push(int x) {
    q[rear++] = x;
}
int pop() {
    if (front == rear) return -1;
    return q[front++];
}
int size() {
    return rear - front;
}
int empty() {
    return front == rear;
}
int get_front() {
    if (front == rear) return -1;
    return q[front];
}
int get_back() {
    if (front == rear) return -1;
    return q[rear - 1];
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        char s[6];
        scanf("%s",s);
        if (strcmp(s, "push") == 0) {
            int num;
            scanf("%d", &num);
            push(num);
        } else if (strcmp(s, "pop") == 0) printf("%d\n",pop());
        else if (strcmp(s, "size") == 0) printf("%d\n",size());
        else if (strcmp(s, "empty") == 0) printf("%d\n",empty());
        else if (strcmp(s, "front") == 0) printf("%d\n",get_front());
        else if (strcmp(s, "back") == 0) printf("%d\n",get_back());
        }
    return 0;
}