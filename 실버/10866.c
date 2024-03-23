#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int data[20000];
    int front;
    int back;
} deque;

void init(deque* d) {
    d->front = 10000;
    d->back = 9999;
}

void push_front(deque* d, int x) {
    d->data[--d->front] = x;
}

void push_back(deque* d, int x) {
    d->data[++d->back] = x;
}

int pop_front(deque* d) {
    if (d->front > d->back) return -1;
    return d->data[d->front++];
}

int pop_back(deque* d) {
    if (d->front > d->back) return -1;
    return d->data[d->back--];
}

int size(deque* d) {
    return d->back - d->front + 1;
}

int empty(deque* d) {
    return d->front > d->back ? 1 : 0;
}

int front(deque* d) {
    if (d->front > d->back) return -1;
    return d->data[d->front];
}

int back(deque* d) {
    if (d->front > d->back) return -1;
    return d->data[d->back];
}

int main() {
    int n, x;
    char s[20];
    scanf("%d", &n);
    deque d;
    init(&d);
    for(int i=0;i<n;i++) {
        scanf("%s",s);
        if (strcmp(s, "push_front") == 0) {
            scanf("%d", &x);
            push_front(&d, x);
        } else if (strcmp(s, "push_back") == 0) {
            scanf("%d", &x);
            push_back(&d, x);
        } else if (strcmp(s, "pop_front") == 0) {
            printf("%d\n", pop_front(&d));
        } else if (strcmp(s, "pop_back") == 0) {
            printf("%d\n", pop_back(&d));
        } else if (strcmp(s, "size") == 0) {
            printf("%d\n", size(&d));
        } else if (strcmp(s, "empty") == 0) {
            printf("%d\n", empty(&d));
        } else if (strcmp(s, "front") == 0) {
            printf("%d\n", front(&d));
        } else if (strcmp(s, "back") == 0) {
            printf("%d\n", back(&d));
        }
    }
    return 0;
}
