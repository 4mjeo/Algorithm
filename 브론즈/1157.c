#include <stdio.h>
#include <string.h>
int main(){
    char s[1000001],r;
    int a=-1,cnt[26]={0,},len;
    scanf("%s",s);
    len = strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]>='a') cnt[s[i]-'a']++;
        else cnt[s[i]-'A']++;
    }
    for(int i=0;i<26;i++){
        if(cnt[i]>a){
            a = cnt[i];
            r = i+'A';
        }
    }
    int check=0;
    for(int i=0;i<26;i++){
        if(cnt[i]==a &&r!=i+'A'){
            check=1;
            break;
        }
    }
    if(check) printf("?");
    else printf("%c",r);
    return 0;
}
