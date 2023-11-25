#include <stdio.h>
int main(){
    int n,r=0,total;
    char s[51];
    scanf("%d",&n);
    scanf("%s",s);
    for(int i=0;i<n;i++){
        if(s[i]=='L') r++;
    }
    total = n-(r/2)+1;
    if(total>n) total=n;
    printf("%d",total);
    return 0;
}