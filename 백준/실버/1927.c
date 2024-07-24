#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100001
int heap[MAX_SIZE];
int size = 0;
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void insert(int value) {
    heap[++size] = value;
    int current = size;
    while(current > 1 && heap[current] < heap[current / 2]) {
        swap(&heap[current], &heap[current / 2]);
        current /= 2;
    }
}
int deleteMin() {
    if(size == 0) return 0;
    int result = heap[1];
    heap[1] = heap[size--];
    int current = 1;
    while(current * 2 <= size) {
        int child;
        if(current * 2 + 1 > size) child = current * 2;
        else child = heap[current * 2] < heap[current * 2 + 1] ? current * 2 : current * 2 + 1;
        if (heap[current] < heap[child]) break;
        swap(&heap[current], &heap[child]);
        current = child;
    }
    return result;
}
int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        int command;
        scanf("%d", &command);
        if(command == 0) printf("%d\n", deleteMin());
        else insert(command);
    }
    return 0;
}
