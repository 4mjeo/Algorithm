#include <stdio.h>
#define MAX 10001
int q[MAX];
int front=0,rear=0;
void push(int x) {
    q[rear++] = x;
}

int pop() {
    if(front == rear) {
        return -1;
    }else {
        return q[front++];
    }
}

int size() {
    return rear - front;
}

int empty() {
    return (front == rear) ? 1 : 0;
}

int f() {
    return (front == rear) ? -1 : q[front];
}

int back() {
    return (front == rear) ? -1 : q[rear - 1];
}
int main() {
    int n, x;
    char s[10];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", s);
        if(s[0] == 'p' && s[1] == 'u') {
            scanf("%d", &x);
            push(x);
        }else if(s[0] == 'p' && s[1] == 'o') {
            printf("%d\n", pop());
        }else if(s[0] == 's') {
            printf("%d\n", size());
        }else if(s[0] == 'e') {
            printf("%d\n", empty());
        }else if(s[0] == 'f') {
            printf("%d\n", f());
        }else if(s[0] == 'b') {
            printf("%d\n", back());
        }
    }
    return 0;
}
