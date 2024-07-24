#include <stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        char c[51];
        scanf("%s",c);
        int len = strlen(c);
        int cnt = 0;
        for(int j=0;j<len;j++){
            if(c[j] == '(') cnt++;
            else if(c[j] == ')') cnt--;
            if(cnt<0){
                printf("NO\n");
                break;
            }
        }
        if(cnt>=0){
            if(cnt == 0) printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
