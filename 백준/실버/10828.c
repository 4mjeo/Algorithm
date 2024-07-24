#include <stdio.h>
#include <string.h>
int stack[10001];
int top = -1;
int is_empty() {
    if(top == -1) return 1;
    else return 0;
}
void push(int x){
    stack[++top] = x;
}
int pop(){
    if(is_empty()) return -1;
    else return stack[top--];
}
int size(){
    return top+1;
}
int f_top() {
    if(is_empty()) return -1;
    else return stack[top];
}
int main() {
    int n,x;
    char c[5]={0,};
    scanf("%d", &n);
    for(int i=0; i<n; i++) {
        scanf("%s",c);
        if(strcmp(c,"push") == 0) {
            scanf("%d",&x);
            push(x);
        } 
        else if(strcmp(c,"pop") == 0) printf("%d\n", pop());
        else if(strcmp(c, "size") == 0) printf("%d\n", size());
        else if(strcmp(c,"empty") == 0) printf("%d\n", is_empty());
        else if(strcmp(c,"top") == 0) printf("%d\n", f_top());
    }
    return 0;
}
