#include <stdio.h>
#include <string.h>
int main(){
    int a,r,cnt;
    char s[80];
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        r=0;
        cnt=1;
        scanf("%s",s);
        for(int j=0;j<strlen(s);j++){
            if(s[j] == 'O'){
                r+=cnt;
                cnt++;
            } else if(s[j]=='X') {
                cnt=1;
            }
        }
        printf("%d\n",r);
        cnt = 1;
    }
    return 0;
}
