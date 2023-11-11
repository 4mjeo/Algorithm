#include <stdio.h>
#include <stdlib.h>
double stack[100];
int top=-1;
int is_empty(){
    if(top==-1) return 1;
    else return 0;
}
void push(double x){
    stack[++top] = x;
}
double pop(){
    if(is_empty()) return -1;
    else return stack[top--];
}
int main(){
    int n,r=0;
    double p[26];
    char c[100];
    scanf("%d",&n);
    scanf("%s",c);
    for(int i=0;i<n;i++) scanf("%lf", &p[i]);
    while(c[r] != '\0'){
        char str = c[r];
        if(str>='A' && str<='Z') push(p[str - 'A']);
        else{
            double b = pop();
            double a = pop();
            switch(str){
                case '+': push(a + b); break;
                case '-': push(a - b); break;
                case '*': push(a * b); break;
                case '/': push(a / b); break;
            }
        }
        r++;
    }
    printf("%.2lf\n", pop());
    return 0;
}
