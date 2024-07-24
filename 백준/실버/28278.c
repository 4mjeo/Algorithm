#include <stdio.h>
int stack[1000001];
int top = -1;
int is_empty(){
    if (top == -1) return 1;
    else return 0;
}
void push(int x){
    stack[++top] = x;
}
int pop(){
    if (is_empty()) return -1;
    else return stack[top--];
}
int size(){
    return top+1;
}
int f_top(){
    if(is_empty()) return -1;
    else return stack[top];
}
int main() {
    int n,a,x;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&a);
        switch(a){
            case 1:
                scanf("%d",&x);
                push(x);
                break;
            case 2:
                printf("%d\n",pop());
                break;
            case 3:
                printf("%d\n",size());
                break;
            case 4:
                printf("%d\n",is_empty());
                break;
            case 5:
                printf("%d\n",f_top());
                break;
            default:
                break;
        }
    }
    return 0;
}
