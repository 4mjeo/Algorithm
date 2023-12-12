#include <stdio.h>
#include <string.h>
int main(){
    char c[51];
    int cnt=0;
    scanf("%s",c);
    for(int i=0;i<strlen(c);i++){
        if((strlen(c)-3>=0) && c[i]=='X' && c[i+1]=='X' && c[i+2]=='X' && c[i+3]=='X'){
            c[i]='A';
            c[i+1]='A';
            c[i+2]='A';
            c[i+3]='A';
        }
        else if((strlen(c)-1>=0) && c[i]=='X' && c[i+1]=='X'){
            c[i]='B';
            c[i+1]='B';
        }
        continue;
    }
    for(int i=0;i<strlen(c);i++){
        if(c[i]=='X'){
            cnt=1;
            break;
        }
    }
    if(cnt==1) printf("-1");
    else{
        for(int i=0;i<strlen(c);i++){
            printf("%c",c[i]);
        }
    }
    return 0;
}