#include <stdio.h>
#include <stdlib.h>
int stack[100000];
int top = -1;
void push(int x) {
    stack[++top] = x;
}
int pop() {
    if(top == -1) return -1;
    return stack[top--];
}
int main() {
    int n,tmp=1,index=0;
    int s[100000];
    char result[200000];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &s[i]);
    }
    for(int i=0;i<n;i++) {
        int check = s[i];
        if(check >= tmp) {
            while(check >= tmp) {
                push(tmp++);
                result[index++] = '+';
            }
            pop();
            result[index++] = '-';
        } else {
            if(stack[top] != s[i]) {
                printf("NO\n");
                return 0;
            }
            pop();
            result[index++] = '-';
        }
    } 
    for(int i=0;i<index;i++) {
        printf("%c\n",result[i]);
    }
    return 0;
}
