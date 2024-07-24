#include <stdio.h>
int s[1001],top=-1;
void push(int x){
    s[++top]=x;
}
int pop(){
    return s[top--];
}
int main(){
    int s2[1001],n,a=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&s2[i]);
    for(int i=0;i<n;i++){
        push(s2[i]);
        while(s[top]==a){
            pop();
            a++;
        }
    }
    if(top ==-1) printf("Nice");
    else printf("Sad");
    return 0;
}