#include <stdio.h>
int s[100000],top=-1;
int push(int x){
    s[++top] = x;
}
int pop(){
    --top;
}
int main(){
    int k,a,sum=0;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        scanf("%d",&a);
        if(a==0) pop();
        else push(a);
    }
    for(int i=0;i<=top;i++){
        sum += s[i];
    }
    printf("%d",sum);
    return 0;
}